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
    vector<vector<int>> Arr;
    for (int i = 0; i < N; ++i)
    {
        int p;
        cin>>p;
        vector<int> temp;
        for (int j = 0; j < p; ++j)
        {
            int x;
            cin>>x;
            temp.push_back(x);

        }
        Arr.push_back(temp);
        
        
    } 
        for (int i = 0; i < N; ++i)
        {
            PrintVector(Arr[i]);
        }
    


    return 0;
}