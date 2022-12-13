#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<string> str){
    cout<<str.size()<<endl;
    for (int i = 0; i < str.size(); i++)
    {
       cout<<str[i]<<" ";
    }
    
}

int main(){
    vector<string> str;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        str.push_back(x);
    }
    PrintVec(str);
    return 0;
}