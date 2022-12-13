//find minimum value of vector and place it at first position do it recursively till sorted
#include<bits/stdc++.h>
using namespace std;

void selection(int *vec,int k){
        //base case
        if(k==1||k==0){
            return ;
        }
        //opeartion
        int mini=INT_MAX;
        int index=-1;
        for(int i=0;i<k;i++){
            if(vec[i]<mini){
                mini=vec[i];
                index=i;
            }
        }
     swap(vec[0],vec[index]);
        //recursive call
  selection(vec+1,k-1);

}

int main(){
    int vec[]={11,10,7,8,4};
    int k=5;
    selection(vec,k);
    for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}