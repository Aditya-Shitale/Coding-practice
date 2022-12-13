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
vector<vector<int>> connected_components;
vector<int>current_cc;

void dfs(int vertex)
{

    visited[vertex] = 1;
    current_cc.push_back(vertex);
    for (auto child : graph[vertex])
    {
        if (visited[child])
            continue;
        dfs(child);
    }
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
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
            current_cc.clear();
        dfs(i);
        connected_components.push_back(current_cc);
        ct++;
    }

  cout<<endl;
    cout <<"no. of connected componenets in graph are "<< ct;
 cout<<endl;
for(auto x:connected_components){
    for(auto k:x){
        cout<<k<<" ";
    }
    cout<<endl;
}

    return 0;
}