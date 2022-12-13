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
const int INF=1e9+10;
vector<pair<int,int>> g[N];
vector<int> lev(N,INF);
int n,m;

int bfs(){
    deque<int>q;
    q.push_back(1);
    lev[1]=0;

    while(!q.empty()){
        int cur_v=q.front();
        q.pop_front();
        for(auto child: g[cur_v]){
            int child_v =child.first;
            int wt= child.second;
            if(lev[cur_v]+wt<lev[child_v]){
                lev[child_v]= lev[cur_v]+wt;
                if(wt==1){
                    q.push_back(child_v);
                }else{
                    q.push_front(child_v);
                }
            }
        }
    }
    if(lev[n]==INF)return -1;
    else return lev[n];
}

int main(){
    file();
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x==y)continue;
        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }

cout<<bfs()<<endl;

    return 0;
}

// i/p
/*
7 7
1 2
3 2
3 4
7 4
6 2
5 6
7 5
*/
//o/p
//2
// codechef ==>chef and reversing