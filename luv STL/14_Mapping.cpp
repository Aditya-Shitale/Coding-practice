#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    
    for (auto mpa : mp)
    {
        cout<<mpa.first<<" "<<mpa.second<<" "<<endl;
    }
    


    return 0;
}