#include<iostream>
using namespace std;


bool isEven (int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a; 
    cin>>a;
  if (  isEven(a)){

cout<<"the no. is even"<<endl;
  }
  else {
      cout<<"no. is odd"<<endl;
  }

    return 0;
}