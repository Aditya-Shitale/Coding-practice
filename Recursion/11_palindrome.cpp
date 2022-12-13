#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str,int i,int j){

    if(i>j){
        return 1;
    }
    if(str[i]==str[j]){
        i++;
        j--;
       
    }
    else{
        return 0;
    }
     return palindrome(str,i,j);
}

int main(){
    string str="abbad";
    int i=0;
    int j=str.size()-1;
    cout<<palindrome(str,i,j);
    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str="abbad";
//     int i=0;
//     int j=str.size()-1;
//     while(i<j){
//         if(str[i]==str[j]){
//            i++;
//         j--;
//         }
//         else{
//            cout<<"false";
//            return 0;
//         }
        
//     }
// cout<<"true";
//     return 0;
// }