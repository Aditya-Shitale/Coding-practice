#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int>s,int element){


 if (s.empty())
{
    s.push(element);
    return;
}
int num=s.top();
s.pop();
insertBottom(s,element);
s.push(num);

}
stack<int> pushBottom(stack<int>&mystack,int x){
    insertBottom(mystack,x);
    return mystack;
}

int main(){
    
    stack<int> s;
    s.push(5);
      s.push(5);
        s.push(5);
          s.push(5);

          pushBottom(s,8);
          for (int i = 0; i < s.size(); i++)
{
    cout<<s.top()<<endl;
    
}

    return 0;
}