#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(7);
    while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
    }

    return 0;
}