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
int vis[N];
int level[N];

void bfs(int source){

    queue<int> q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(auto child:g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }
cout<<endl;

}


int main(){
    file();
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);

for(int i=1;i<=n;i++){
    cout<<i<<" "<<"level "<<level[i]<<endl;
}

    return 0;
}

//Time complexity O(V+E);
/*
13
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
 10 11
 */