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
double epsilon=1e-6;

int main(){
    file();
    int k;
    cin>>k;
    while(k--){

double x;
cin>>x;
double lo=1;
double hi=x;
double mid;
        while(hi-lo>epsilon){
            mid=(hi+lo)/2;
            if(mid*mid < x){
                lo=mid;
            }
            else{
                hi=mid;
            }

        }
        // cout<<(int) lo<<endl;
        cout<<lo<<"\n"<<endl;
      
    }


    return 0;
}