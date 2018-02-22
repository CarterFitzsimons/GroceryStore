//Author: Carter Fitzsimons
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string newItem;

  do{
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    
    if(input == 'a' || input == 'A'){
        cout<<"What is the item?";
        cin>>newItem;
        if(numItems <= 5){
            string list[numItems] = newItem;
            numItems = numItems + 1;
        }
        if(numItems > 5) {
            cout<<"You'll need a bigger list!"; 
        }
    }
  }
  while(input != 'q' && input != 'Q');

  return 0;
}
