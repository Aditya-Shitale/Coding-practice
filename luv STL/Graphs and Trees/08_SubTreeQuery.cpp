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

/*Given Q queriesz,Q<=10^5
 In each query given V,
 print subtree sum of V,number of even numbers
 in subtree V */


const int N=1e5+10;
vector<int> graph[N];
int subtree_sum[N];



void dfs(int vertex,int par){

//=====>>>section 1 Take Action on vertex after entering the Vertex



    for(auto child:graph[vertex]){
        //=====> section 2 Take action on child before entering the child node
        
   if(child==par)continue;

     /* always-->>> */  dfs(child,vertex);
        //====>section 3 Take action on child after exiting the child node or exiting child
      
    }
//=====>section 4 Take Action on vertex before exiting the vertex    
}

int main(){
    file();
int n;
cin>>n;
for(int i=0;i<n-1;i++){
int v1,v2;
cin>>v1>>v2;
graph[v1].push_back(v2);
graph[v2].push_back(v1);
}

// dfs(1,0);
int q;
while(q--){
    int v;
    cin>>v;
}


    return 0;
}

//test case
/* 13
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
 10 11 */

