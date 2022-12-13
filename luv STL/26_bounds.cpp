#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //in case of array
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
int t;
cin>>t;
    int *ptr =upper_bound(a,a+n,t);
    cout<<(*ptr)<<endl;

//in case of vector

vector<int> vec;
int k;
cin>>k;
for (int  i = 0; i < t; i++)
{
    cin>>vec[i];
}
sort(vec.begin(),vec.end());
for (int i = 0; i < k; i++)
{
    cout<<vec[i]<<" ";
}
cout<<endl;

auto it = lower_bound(vec.begin(),vec.end(),26);

//in case of set

set<int> s;
for (int i = 0; i < k; i++)
{
    int l;
    cin>>l;
    s.insert(l);
}
auto itr = s.lower_bound(26);  // upper method will give tle in case of set and maps








    return 0;
}