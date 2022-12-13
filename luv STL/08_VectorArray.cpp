#include<bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> Arr){
    cout<<"size:"<<Arr.size()<<endl;
    for (int i = 0; i < Arr.size(); i++)
    {
        cout<<Arr[i]<<" "<<endl;
    }
    
}


int main(){
    int N;
    cin>>N;
    vector<int> Arr[N];
    for (int i = 0; i < N; ++i)
    {
        int p;
        cin>>p;
        for (int j = 0; j < p; ++j)
        {
            int x;
            cin>>x;
            Arr[i].push_back(x);

        }
        cout<<Arr[0][1]<<endl;
        
        
    } 
        for (int i = 0; i < N; ++i)
        {
            PrintVector(Arr[i]);
        }
    


    return 0;
}