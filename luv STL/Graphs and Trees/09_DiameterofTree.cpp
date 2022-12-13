#include<bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}


const int N=1e5+10;
vector<int> g[N];
int depth[N];

void dfs(int v,int par=-1){

    for(auto child:g[v]){
        if(child==par)continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
    }
}


int main(){
 file();
int n;
cin>>n;
for(int i=0;i<n-1;i++){
int v1,v2;
cin>>v1>>v2;
g[v1].push_back(v2);
g[v2].push_back(v1);
}
dfs(1);
int max_depth=-1;
int max_depth_node;

for(int i=1;i<=n;i++){
    if(max_depth<depth[i]){
        max_depth=depth[i];
        max_depth_node=i;
    }
    depth[i]=0;
}
dfs(max_depth_node);
max_depth=-1;
for(int i=1;i<=n;i++){
     if(max_depth<depth[i]){
        max_depth=depth[i];
    }
}
cout<<max_depth;

}





//test case
/* 13
 1 2
 1 3
 1 13
 2 5
 3 4
 5 6
 5 7
 5 8
 8 12
 4 9
 4 10
 10 11 */

