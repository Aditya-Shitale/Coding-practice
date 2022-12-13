#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack,int count,int size){
    if(count==size/2){
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();
    // return;

    solve(inputStack,count+1,size);
    inputStack.push(num);

    }

void deleteMiddle(stack<int> &inputStack,int N){
    int count=0;
    solve(inputStack,count,N);
}


int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
s.push(1);
s.push(5);

deleteMiddle(s,s.size()-1);

for (int i = 0; i < s.size()-1; i++)
{
    cout<<s.top()<<endl;
    s.pop();
}
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;

    
    return 0;
}