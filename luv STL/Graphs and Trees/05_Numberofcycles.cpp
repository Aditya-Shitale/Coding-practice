#include <bits/stdc++.h>
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



const int N = 1e5 + 10;
vector<int> graph[N];
bool visited[N];

bool dfs(int vertex,int parent)
{

    visited[vertex] = 1;
   bool isLoopExist=false;
    for (auto child : graph[vertex])
    {
        if (visited[child]&&child==parent) continue;
        if (visited[child]) return true;
        isLoopExist|= dfs(child,vertex);
    }
    return isLoopExist;
}

int main()
{
    file();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
   
    bool isLoopexist=false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])continue;
            
        if(dfs(i,0)){
            isLoopexist=true;
            break;
        }
    }

  cout<<isLoopexist;


    return 0;
}