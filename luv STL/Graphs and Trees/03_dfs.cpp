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
vector<int> graph[N];
bool visited[N];

void dfs(int vertex){

//=====>>>section 1 Take Action on vertex after entering the Vertex
cout<<vertex<<endl;
visited[vertex]=1;

    for(auto child:graph[vertex]){
        //=====> section 2 Take action on child before entering the child node
        cout<<"par"<<vertex<<", child "<<child<<endl;
    if(visited[child])continue;

     /* always-->>> */  dfs(child);
        //====>section 3 Take action on child after exiting the hild node
    }
//=====>section 4 Take Action on vertex before exiting the vertex    
}

int main(){
    file();
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
int v1,v2;
cin>>v1>>v2;
graph[v1].push_back(v2);
graph[v2].push_back(v1);
}
int vertex=3;
dfs(vertex);


    return 0;
}