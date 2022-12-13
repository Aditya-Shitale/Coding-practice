#include <bits/stdc++.h>
using namespace std;
void file(){
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
}
int main()
{
    file();
    int n;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

//    cout<<vec[0][1]<<endl;
   int cnt=0;
   int l;
    int i=0,j=0;
   while(i<n){
    cnt=cnt+vec[i][j];
    i++;
    j++;
   }
//    cout<<cnt<<endl;
   int cnt2=0;
    i=0;
    j=n-1;
   while(i<n){
    cnt2=cnt2+vec[i][j];
    i++;
    j--;
   }
//    cout<<cnt2<<endl;
   cout<<abs(cnt-cnt2)<<endl;
    return 0;
}