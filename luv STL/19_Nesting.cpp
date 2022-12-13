#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string,string>,vector<int>> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string x,y;
        int c;
        cin>>x>>y>>c;
        for (int j = 0; j < c; j++)
        {
            int z;
            cin>>z;
             m[{x,y}].push_back(z);
            
        }

        for (auto &pr : m){
            auto &fn = pr.first;
            auto &l= pr.second;
            cout<<fn.first<<" "<<fn.second<<endl;
            cout<<l.size()<<endl;
            for(auto &element : l){
                cout<<element<<endl;
            }
        }
        {
            /* code */
        }
        
        
        
    }
    
    return 0;
}