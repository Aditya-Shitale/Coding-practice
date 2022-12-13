#include<bits/stdc++.h>
using namespace std;

int series(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    // cout<<series(n-1)+series(n-2)<<" ";

    int z= series(n-1)+series(n-2);
    cout<<z<<" ";
    return z;
//   return 0;
}

int main(){
    int n;
    cin>>n;
   cout<< series(n);
    return 0;
}