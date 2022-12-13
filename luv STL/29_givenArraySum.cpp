#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int q;
    cin>>q;
    while(q--){
    int k,s;
    cin>>k>>s;
    int z=0;
    for (int i = k; i < s; i++)
    {
        z=z+arr[i];
    }
    cout<<z<<endl;
    }
    return 0;
}