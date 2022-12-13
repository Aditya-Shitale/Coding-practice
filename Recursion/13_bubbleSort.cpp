//In bubble sort we swap the greatest element to the last point and do it again and again till whole sort
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &vec,int size){
    //base case
    if(size==1||size==0){
        return ;
    }

    //solve one case
    for(int i=0;i<size-1;i++){
            if(vec[i]>vec[i+1]){
                swap(vec[i],vec[i+1]);
            }
    }
    //recursive call
    bubbleSort(vec,size-1);
}

int main(){
    vector<int> vec={2,18,14,3,6,9,18};
    int size=vec.size();

bubbleSort(vec,size);
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}
    return 0;
}