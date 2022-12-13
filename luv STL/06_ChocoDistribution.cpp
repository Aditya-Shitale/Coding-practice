#include<bits/stdc++.h>
using namespace std;

void Printvector(vector<int> A[]){
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    
}

int main(){
    int N;
    cin>>N;
    vector<int> A[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            A[i].push_back(x);
        }
        
    }
    Printvector(A[]);
    
    return 0;
}