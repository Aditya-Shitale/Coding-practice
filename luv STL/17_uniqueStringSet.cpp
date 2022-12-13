#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> s){
    for(auto val: s){
        cout<<val<<endl;
    }
}

int main(){
    set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       string x;
       cin>>x;
       s.insert(x);
    }
    printSet(s); 
    


int q;
cin>>q;
while(q--){
    string p;
    cin>>p;
  if(s.find(p) == s.end()){
    cout<<"No"<<endl;
  }
  else{
    cout<<"yes"<<endl;
  }


}
    return 0;

}