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




void dfs(int i,int j,int initialcolor,int newcolor,vector<vector<int>>& image){

int n=image.size();
int m=image[0].size();

if(i<0||j<0)return;
if(i>=n || j>=m)return;
if(image[i][j]!=initialcolor)return;
image[i][j]=newcolor;

dfs(i-1,j,initialcolor,newcolor,image);
dfs(i+1,j,initialcolor,newcolor,image);
dfs(i,j+1,initialcolor,newcolor,image);
dfs(i,j-1,initialcolor,newcolor,image);

}

 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor=image[sr][sc];
        if(initialcolor!=color){

        dfs(sr,sc,initialcolor,color,image);
        }
        return image;
    }


int main(){
    file();
vector<vector<int,int>> image;
 


    return 0;
}