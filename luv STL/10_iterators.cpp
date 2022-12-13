#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it=v.begin();
    // cout<<*(it+1)<<endl;
    for(it =v.begin();it<v.end();++it){
        cout<<*(it)<<endl;
    }
    
vector<pair<int,int>> Vec_pr ={{1,2},{3,4},{5,6}};

vector<pair<int,int>> :: iterator itr =Vec_pr.begin();
for(itr =Vec_pr.begin();itr<Vec_pr.end();itr++){
cout<<itr->first<<" "<<itr->second<<" "<<endl;
}


    return 0;
}