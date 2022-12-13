#include<iostream>
using namespace std;

int PrintMax(int arr[],int size)
{
    int Max = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if(Max<arr[i]){
            Max = arr[i];
        }
    }
        return Max;
}

int PrintMin(int arr[],int size){
    int Min = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
        // if(Min>arr[i]){
        //     Min = arr[i];
        // }
        Min = min(arr[i], Min); //*******************new thing*****************
    }
        return Min;
    
}


int main(){
    
    int size;
    cin>>size;

    int array[100];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
        cout<<array[i]<<" ";
    }
    
    
   cout<< PrintMax(array,size)<<endl;
   cout<< PrintMin(array,size)<<endl;


    return 0;
}