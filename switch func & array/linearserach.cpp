#include<iostream>
using namespace std;

int main(){
    
int arr[10]={14 ,13 ,-2,8,4,3,2,6,0,11};
int a;
cin>>a;
cout<<sizeof(arr)/sizeof(int);

for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
{
    if(a==arr[i]){
        cout<<"key is there"<<endl<<i<<endl;

    }
    else{
        cout<<" ";
    }
    

}

     
    return 0;
}