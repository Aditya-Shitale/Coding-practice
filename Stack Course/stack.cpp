#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(4);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

   cout<< st.peek()<<endl;
   st.pop();
   
   cout<< st.peek()<<endl;

    //     stack<int> s;
    //      s.push(5);
    // s.push(4);
    // s.push(3);

    // s.push(2);
    // s.push(1);
    //  cout<< " "<<s.top()<<endl;

    //  if(s.empty()){
    //      cout<<"stack is empty"<<endl;
    //  }
    //  else{
    //      cout<<" stack is not empty"<<endl;
    //  }

    //  cout<<s.size()<<endl;
    //  cout<<s.print()
    return 0;
}