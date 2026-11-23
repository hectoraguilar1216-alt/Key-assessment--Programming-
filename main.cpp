
#include <iostream>
#include <string>
#include "functions.h"
#include "queue.h"
using namespace std;

int main(){
    string ans;
    clinic obj;
    int choice = 0;
cout<<"=======================================\n";
cout<<" -- COROZAL CLINIC APPOINTMENT QUEUE --   \n";
cout<<"=======================================\n";
do { menu();
cout<<"===================================\n";
choice = options() ;
  switch (choice){ 
    case 1 : obj.option1() ;break;
    case 2 : obj.option2();break;
    case 3 : obj.option3();break;
    case 4 : obj.option4();break;
    case 5 : cout<<" Thank you and have good day. Exit";break;
    case 6 : obj.reset();break;
}
  if (choice !=5) {
cout<<"===================================\n";
    cout<<"Another Input?" ;
  cin>>ans; } 
  
}while(choice != 5 && ans == "yes" )  ; 

   return 0;
}


