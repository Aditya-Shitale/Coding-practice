#include<iostream>
using namespace std;

int main(){
    pair<int, string> p;
    pair<int, string> pr;
    p = make_pair(12,"adi");
    pr ={11,"aditya"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<pr.first<<endl;
    cout<<pr.second;
    return 0;
}