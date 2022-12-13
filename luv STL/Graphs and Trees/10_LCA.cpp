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
int par[N];

void dfs(int v,int p=-1){

        par[v]=p;
    for(auto child:g[v]){
        if(child==p)continue;
        dfs(child,v);
    }
}

vector<int> path(int v){
    vector<int> ans;
    while(v!=-1){
        ans.push_back(v);
        v=par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    file();

int n;
cin>>n;
for(int i=0;i<n-1;i++)
{
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}
dfs(1);
int p,q;
cin>>p>>q;
vector<int> path_p=path(p);
vector<int> path_q =path(q);

int mn_ln= min(path_p.size(),path_q.size());
int lca=-1;
for(int i=0;i<mn_ln;i++){
    if(path_p[i]==path_q[i]){
        lca=path_p[i];
    }
    else{
        break;
    }
}
    cout<<lca<<endl;

    return 0;
}