#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec ={1,2,3,4};
    vector<pair<int,int>> pr ={{1,2},{2,3},{3,4}};

    for(pair<int,int> t: pr){ /* instead of vector<pair<int,int>> vec_pr:: iterator it =vec_pr.begin()*/ 
        cout<< t.first<<" "<<t.second<<" "<<endl;
    }

    for(int x : vec){
        cout<<x <<" ";
    }
    
    return 0;
}