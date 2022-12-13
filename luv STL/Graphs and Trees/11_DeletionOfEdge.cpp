#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int> g[N];
int subtree_sum[N];
int val[N]; //weight of every node
const int M=1e9+10;

void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}

void dfs(int v,int p=-1){

 subtree_sum[v] +=val[v-1];
 for(auto child: g[v]){
    if(p==v)continue;
    dfs(child,v);
    subtree_sum[v] +=subtree_sum[child];
 }

}

int main(){
    file();
    int z;
    cin>>z;
    for(int i=0;i<z;i++){
        int k;
        cin>>k;
        val[i]=k;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
dfs(1,0);
long long ans =0;
for(int i=2;i<=n;i++){
    int part1=subtree_sum[i];
    int part2=subtree_sum[1]-part1;
    ans=max(ans,((part1*1LL*part2)%M));
}
cout<<ans;


    return 0;
}