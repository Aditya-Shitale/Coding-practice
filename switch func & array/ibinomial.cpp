#include<iostream>
using namespace std;

int factorial (int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int numerator = factorial(n);
    int denom =factorial(n-r) * factorial(r);

    int ans = numerator/denom ;
    
    return ans;


}

int main(){
    int n,r;
    cin>>n>>r;
    int answer = nCr(n,r);
    cout<<answer<<endl;
    
    
    return 0;
}
// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }


// int main( ) {

//     int n, r;

//     cin>> n >> r ;

//     cout <<" Answer is " << nCr(n,r) << endl;

//     return 0;
// }