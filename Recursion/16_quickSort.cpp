#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec,int s,int e){
    int pivot=vec[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(vec[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex =s+cnt;
    swap(vec[pivotIndex],vec[s]);

    //left and right part arrangment
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){

        while(vec[i]<=pivot){
            i++;
        }
        while(vec[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(vec[i++],vec[j--]);
        }
    }
    return pivotIndex;


}




void quickSort(vector<int> &vec,int s,int e){

//base case
if(s>=e) return;

//partition
int p = partition (vec,s,e);

//left part sort
quickSort(vec,s,p-1);

//right part sort
quickSort(vec,p+1,e);


}


int main(){
    vector<int> vec={2,4,1,6,9};
    int n=5;
    quickSort(vec,0,n-1);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }cout<<endl;


    return 0;
}