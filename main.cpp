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
        if(numItems < 5){
            list[numItems] = newItem;
            numItems = numItems + 1;
        }else if(numItems >= 5) {
          cout<<"\nYou'll need a bigger list!"; 
      }
    }
  }
  while(input != 'q' && input != 'Q');
  cout<<"==ITEMS TO BUY==\n"; 
  for(int i=0;i<5;i++){
    cout<<i+1<<" "<<list[i]<<"\n";
  }
  return 0;
}
