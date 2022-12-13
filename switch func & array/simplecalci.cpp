#include<iostream>
using namespace std;

int main(){
    // int a ,b;
    // char c;
    // cin>>a>>b>>c;
    // if (c == '+'){
    //     cout<<a+b<<endl;
    // }
    // else if(c == '*' ){
    //     cout<<a*b<<endl;
        
    // }
    // else if(c == '%' ){
    //     cout<<a%b<<endl;
        
    // }
    // else if(c == '-' ){
    //     cout<<a-b<<endl;
        
    // }
    /* **************using switch***************** */

    int a;
    cout<<"enter value of a "<<endl;
    cin>>a;
    int b;
    cout<<"enter value of b "<<endl;
    cin>>b;
    char c ;
    cout<<"enter operation to perform"<<endl;
    cin>>c;

    switch(c){
        case '+' : cout<<a+b<<endl;
        break;
        case '-' : cout<<a-b<<endl;
        break;
        case '*' : cout<<a*b<<endl;
        break;
        case '/' : cout<<a/b<<endl;
        break;
        case '%' : cout<<a%b<<endl;
        break;

    }


    return 0;
}