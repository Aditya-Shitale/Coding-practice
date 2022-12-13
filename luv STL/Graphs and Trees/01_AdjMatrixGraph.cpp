#include<bits/stdc++.h>
using namespace std;
const int k=1e3+10;
int graph[k][k];

void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}

int main(){
   file();
    int n,m;
    cin>>n>>m;
    // int graph[n+1][n+1];
    for(int i=0;i<m;i++){
      int v1,v2,wt;
      cin>>v1>>v2>>wt;
      graph[v1][v2]=wt;
      graph[v2][v1]=wt;
    }
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
        cout<<graph[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
//O(Nn^2)---space complexity
//N=10^5
/*
6 9 
1 3 3 
1 5 4 
3 5 8
3 4 6
3 6 7
3 2 4
2 6 6
4 6 3
5 6 4



*/