#include<bits/stdc++.h>
using namespace std;


void printMap(map<int,string> &m){
    for(auto &pr : m){
    cout<<pr.first<<" "<<pr.second<<" "<<endl;
    }
    cout<<endl;
}
int main(){
    map<int,string> m;
    m[1]="A";
    m[2]="B";
    m[3]="C";
    m.insert({4,"D"});
    m.insert({5,"E"});

//find operation
    auto it = m.find(3);
    if(it==m.end()){
        cout<<"no value"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
        cout<<endl;
            }
printMap(m);

//erase operation
if(it != m.end())   //added a check so that erase  function can take value which is not in the map
            m.erase(7);
            printMap(m);

//inserting and output operations

    // map<int,string> :: iterator it;
    // for (it =m.begin();it!=m.end();++it)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
    // }
    // for (it =m.begin();it!=m.end();++it)
    // {
    //     cout<<it->first<<" "<<it->second<<" "<<endl;
    // }
    // for(auto &pr : m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    



    return 0;
}