#include<iostream>
using namespace std;

int main(){
    int num =2;
    char ch = 'a';

    switch(ch){
        case 1 : cout<<"this is no. 1"<<endl;
        break;
        case 2 : cout<<"this is no. 2"<<endl;
        break;
        case 'a' : cout<<"hi  i am aditya"<<endl;
        break;
        default: cout<<"nothing matching ";
        break;
    }
    switch(num){
        case 1 : cout<<"this is no. 1"<<endl;
        break;
        case 2 : cout<<"this is no. 2"<<endl;
        break;
        case 'a' : cout<<"hi  i am aditya";
        break;
        default: cout<<"nothing matching ";
        break;
    }
    return 0;
}