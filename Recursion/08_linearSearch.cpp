#include<bits/stdc++.h>
using namespace std;

bool IsPresent(int arr[],int key,int size){
 
    if(size==0){
        return 0;
    }
       if(key==arr[0]){
        return 1;
    }
return IsPresent(arr+1,key,size-1);

}

int main(){
    int arr[5]={3,5,1,2,6};
    int key=6;
    int size=5;
cout<<IsPresent(arr,key,size);
    return 0;
}