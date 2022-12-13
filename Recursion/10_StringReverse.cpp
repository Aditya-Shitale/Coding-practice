#include<bits/stdc++.h>
using namespace std;

string revert(string str,int i,int j){
    if(i>j){
        return str;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    return revert(str,i,j);
}

int main(){
    string str="aditya";
    int i=0;
    int j=str.size()-1;
    cout<<revert(str,i,j);
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str="Aditya";
//     int i=0;
//     int j=str.size()-1;
//     while (i<j)
//     {
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     cout<<str;
    
//     return 0;
// }