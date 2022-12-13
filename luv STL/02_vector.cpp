#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    vector<int> v;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVector(v);
    return 0;
}