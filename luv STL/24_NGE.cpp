#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> G(vector<int> v){
    vector<int> g(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); ++i)
    {
        while(!st.empty() && v[i]> v[st.top()]){
            g[st.top()] =i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        g[st.top()] = -1;
        st.pop();
    }
    return g;
    
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> g =G(v);
    for(int i= 0;i<n;++i){
        cout<<v[i]<<" "<< (g[i]== -1 ? -1 : v[g[i]])<< endl;
    }
    return 0;
}








// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         vec.push_back(x);
//     }

//     stack<int> st;
//     st.push(vec[0]);
//     for (int i = 1; i < vec.size(); i++)
//     {
//         if(vec[i]>st.top()){
//             st.pop();
//             st.push(vec[i]);
//         }
//         else if(vec[i]<=st.top()){
//             st.push(vec[i]);
//         }

//     }

//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();

//     }

    
    
//     return 0;
// }