#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }

}
int main(){
    int arr[4]={1,12,15,17};
    int size=4;
   cout<< isSorted(arr,size);
    return 0;
}