#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int hundred , fifty , twenty , one;

  switch(1)
  {
      case 1: hundred=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<hundred<<endl;
              
         
      case 2: fifty=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<fifty<<endl;
              

      case 3: twenty=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<twenty<<endl;
               

      case 4: one=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<one<<endl; 
                  
           }
}