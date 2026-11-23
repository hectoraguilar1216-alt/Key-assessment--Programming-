#include "queue.h"
#include <iostream>
using namespace std;

clinic::clinic(){
    count=0;
    for (int i = 0; i <20; i++)
    {
        ticket[i]=0;
        name[i]="";
    }
    
}
void clinic::option1(){
    string p_name, reason;
    int urgency;
    cout<<"===================================\n";
    if (count >= 20) {
    cout << "Queue is full (max 20 patients).\n";
    return;
}
    cout<<"Enter your fullname: ";
    cin.ignore();
    getline (cin,p_name);
    
    cout<<"\nReason for Visit: ";
    getline (cin,reason);
    
    cout<<"\nUrgency (1.Normal 2.Emergency) : ";
    cin>> urgency;
    
    if ( urgency == 1){
       ticket[count]= next_tick;
       name[count]=p_name;
       cout<<"Ticket number : A"<<ticket[count]<<endl;
       next_tick++;
       count++;
    }else if (urgency == 2){
        emergency++;
        cout<<"You will be attended to immediately.\n";
    } 
}

void clinic::option2(){
    cout<<"===================================\n";
       if (count == 0) {
        cout<<"No patients in the queue.\n";
        return;
       }else{ cout<<"Now serving: A"<< ticket[0]<< "-"<< name[0]<<endl;}
      
       for(int N=0 ; N<count -1; N++){
        name[N] = name[N+1];
        ticket[N] = ticket[N+1];
       }
       count--;
}

void clinic::option3(){
    int cancel_ticket;
    cout<<"===================================\n";
    if(count== 0){
        cout<<"No ticket to cancel.\n";
        return;
    }
    cout<< "Ticket nuber to cancel: A";
    cin>> cancel_ticket;

    for(int C = 0; C<20 ; C++){
        if (ticket[C] == cancel_ticket){
            cout<< "Cancelled ticket A"<<ticket[C]<<endl;
            ticket[C] = 0;
            name[C] = "";
            count--;
        }
    }
}

void clinic::option4(){
    int a_count= 0;
    for (int i = 0; i < 20; i++){
        if (ticket[i] != 0){
            a_count++;
        }
    }
   cout<<"===================================\n";
   cout<<"Patients in queue: "<<a_count<<endl;
   cout<<"Emergency cases: "<<emergency<<endl;
   for ( int i = 0; i < 20; i ++){
    if(ticket[i] != 0){
        cout<<"A"<<ticket[i]<<"-"<<name[i]<<endl;
    }
   } 
}

void clinic::reset(){
    count= 0;
    next_tick=101;
    emergency=0;
    for(int i = 0 ; i< 20; i++){
        ticket[i] =0;
        name[i]="";


    }
    cout<<"===================================\n";
    cout<< "Queue reset for a new day.\n";
}