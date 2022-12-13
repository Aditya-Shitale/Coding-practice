#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> st;
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(7);
    while(!st.empty()){
    cout<<st.front()<<endl;
    st.pop();
    }

    return 0;
}