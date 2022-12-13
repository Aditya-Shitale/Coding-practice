//*******************************REVERSE LINKED LIST***************************
#include<iostream>
using namespace std;

class Node{
public:
Node* next;
int data;

Node(int data){
    this->data=data;
    this->next=NULL;
}
Node* reverseList(Node* &head){
    if (head == NULL|| head->next==NULL)
    {
        return head;
    }
    Node* prev =NULL;
    Node* curr = head;
    Node* forward=NULL;

    while (curr!=NULL)
    {
       forward=curr->next;
       curr->next =prev;
       prev=curr;
       curr=forward;
    }
    return prev;
    
    
     
}

};


int main(){
    
    return 0;
}