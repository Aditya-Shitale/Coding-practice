#include<bits/stdc++.h>
using namespace std;
void file(){
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
}
int main(){
    file();
    int t;
    cin>>t;

    while(t--){
       int x;
       cin>>x;

       unsigned int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    cout<<count-1<<endl;
       
     


    }

    return 0;
}