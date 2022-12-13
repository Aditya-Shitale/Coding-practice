#include<bits/stdc++.h>
using namespace std;

void printset(set<string> &s){
    for(auto val : s){
   cout<<val<<endl;
    }

    //another method for printing set
    // for (auto it=s.begin(); it != s.end(); it++)
    // {
    //   cout<<*it<<endl;
    // }
    
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");

    // set<string> :: iterator it =s.find("abc");
    auto it = s.find("abc");
printset(s);
//erase operation
if(it !=s.end()){
    s.erase(it);
}
printset(s);
    
    return 0;
}