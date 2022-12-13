#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){

//base case
if(b==0){
    return 1;
}
if(b==1){
    return a;
}
//Recursive call
int ans=power(a,b/2);

if(b%2==0){
    return ans*ans;
}
else{
    return a*ans*ans;
}

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int tillPower(int a,int b,int cnt,int ans){
//     if(cnt==b){
//         return ans;
//     }
//     cnt++;
//     ans=ans*a;
    
//   return tillPower(a,b,cnt,ans);
// }
// int main(){
//     int a=2;
//     int b=3;
//     int cnt=0;
//     int ans=1;
//     cout<<tillPower(a,b,cnt,ans);
//     return 0;
// }