#include <iostream>
#include <string>
using namespace std;
void menu(){
    cout<<" -- MENU --\n";
    cout<<"1. Register Patient\n";
    cout<<"2. Call next\n";
    cout<<"3. Cancel Ticket\n";
    cout<<"4. View Summary\n";
    cout<<"5. Exit\n";
    cout<<"6. Reset\n";
}
int options(){
   int choice;
    cout<<"Enter Choice: ";
    cin>> choice;
    
  return choice;  
}