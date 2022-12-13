#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
int *arr;
int size;
int top1;
int top2;

Stack(int s){
    this->size=s;
    arr= new int[s];
    top1=-1;
    top2=s;
}

void push1(int element){
    if(top2-top1>1){
        top1++;
     arr[top1]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}
void push2(int element){
    if(top2-top1>1){
        top2--;
     arr[top2]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}
int pop1(){
    if(top1>=0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        cout<<"stack underflow "<<endl;
    return -1;
    }
}
int pop2(){
    if(top2<size){
        int ans=arr[top2];
        top2++;
        return ans;
    }
    else{
        cout<<"stack underflow "<<endl;
    return size;
    }
}

int peek1(){
if(top1>=0){
    return arr[top1];
}
else{
    cout<<"stack is empty "<<endl;
    return -1;
}
}



int peek2(){
if(top2<=size){
    return arr[top2];
}
else{
    cout<<"stack is empty "<<endl;
    return size;
}


}




};



int main(){

    Stack st(5);
    st.push1(10);
    st.push1(3);

    st.push2(3);
    st.push2(2);


    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
     cout<<st.pop2()<<endl;


     cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;
    
    return 0;
}