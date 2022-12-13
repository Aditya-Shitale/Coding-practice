#include <bits/stdc++.h>
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
int main()
{
    file();
int n;
cin>>n;
vector<int> vec(n);
for (int i = 0; i < n; i++)
{
    cin>>vec[i];
}

int find;
cin>>find;
int lo=0;
int hi=n-1;
int mid;
while(hi-lo>1){
   mid=(hi+lo)/2;
  if(vec[mid]<find){
    lo=mid+1;;
  }
  else{
    hi=mid;
  }
}
if(vec[lo]==find){
    cout<<lo<<endl;
}
else if(vec[hi]==find)
{
    cout<<hi<<endl;
}
else{
    cout<<lo<<endl;
}



    return 0;
}