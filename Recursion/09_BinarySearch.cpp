#include<bits/stdc++.h>
using namespace std;

bool Search(int arr[],int s,int e,int key){
  //element not found
   if(s>e){
    return 0;
   }
   int mid=s+(e-s)/2;
   //element found
   if(arr[mid]==key){
    return 1;
   }
   if(arr[mid]<key){
    return Search(arr,mid+1,e,key);
   }
   else{
    return Search(arr,s,mid-1,key);
   }
}


int main(){
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=14;
    int s=0;
    int e=5;
    cout<<Search(arr,s,e,key);
    return 0;
}