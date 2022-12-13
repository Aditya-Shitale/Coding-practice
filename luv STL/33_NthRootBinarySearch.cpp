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
int multiply(double mid,int n){
     double ans =1;
     for (int i = 0; i < n; i++)
     {
        ans *=mid;
     }
     return ans;

}

int main(){
    file();
    int k;
    cin>>k;
    while(k--){

double x;
int n;
cin>>x>>n;
double lo=1;
double hi=x;
double mid;
        while(hi-lo>epsilon){
            mid=(hi+lo)/2;
            if(multiply(mid,n) < x){
                lo=mid;
            }
            else{
                hi=mid;
            }

        }
        cout<<setprecision(10)<<lo<<"\n"<<endl;
      
    }


    return 0;
}