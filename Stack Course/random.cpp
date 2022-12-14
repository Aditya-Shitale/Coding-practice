#include <bits/stdc++.h>
using namespace std;

void APUtil(vector<int> adj[], int u, bool visited[],
            int disc[], int low[], int& time, int parent,
            bool isAP[])
{
   
    int children = 0;
 
    
    visited[u] = true;
 
    disc[u] = low[u] = ++time;
 
   
    for (auto v : adj[u]) {
        
        if (!visited[v]) {
            children++;
            APUtil(adj, v, visited, disc, low, time, u, isAP);
 
            
            low[u] = min(low[u], low[v]);
 
            
            if (parent != -1 && low[v] >= disc[u])
                isAP[u] = true;
        }
 
       
        else if (v != parent)
            low[u] = min(low[u], disc[v]);
    }
 
    
    if (parent == -1 && children > 1)
        isAP[u] = true;
}
 
void AP(vector<int> adj[], int V)
{
    int disc[V] = { 0 };
    int low[V];
    bool visited[V] = { false };
    bool isAP[V] = { false };
    int time = 0, par = -1;
 
   
    for (int u = 0; u < V; u++)
        if (!visited[u])
            APUtil(adj, u, visited, disc, low,
                   time, par, isAP);
 
    // Printing the APs
    for (int u = 0; u < V; u++)
        if (isAP[u] == true)
            cout << u << " ";
}
 
// Utility function to add an edge
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
int main()
{
    
    int V,E ;
    cin>>V>>E;
    vector<int> adj1[V+1];
    for(int i=0;i<E;i++){
      int v1,v2;
      cin>>v1>>v2;
      addEdge(adj1,v1,v2);
    }
    AP(adj1, V);
 
    
    return 0;
}