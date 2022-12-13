#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<"array is ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<" printing done"<<endl;
}
int main(){
    int first[5]={1,2,3,4};
    printArray(first,5);
    int firs[10]={1,2,3,4};
    printArray(firs,10);
 
    return 0;
}