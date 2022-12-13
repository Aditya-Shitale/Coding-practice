// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e3+10;
// vector<int> graph[N];
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < m; i++)
//     {int v1,v2;
//     cin>>v1>>v2;
//         graph[v1].push_back(v2);
//         graph[v2].push_back(v1);
//     }
    
//     return 0;
// }

//for wighted
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;


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
    vector<pair<int,int>> graph[n];

    for (int i = 0; i < m; i++)
    {int v1,v2,wt;
    cin>>v1>>v2>>wt;
        graph[v1].push_back({v2,wt});
        graph[v2].push_back({v1,wt});
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j].first<<graph[i][j].second<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
//