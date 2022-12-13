#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintMultiset(multiset<string>s){
    for(auto val:s){
        cout<<val<<endl;
    }
}

int main()
{
    multiset<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        s.insert(x);
    }
    PrintMultiset(s);


    int q;
    cin>>q;
    while(q--){
        string y;
        cin>>y;
        if(s.find(y)==s.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}