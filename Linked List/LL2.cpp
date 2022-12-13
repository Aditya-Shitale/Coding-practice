#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if (next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory free for Node with data "<<val<<endl;
    }
};

// travesring LL
void print(Node *head, Node *tail)
{
    Node *temp = head;

    while (temp != NULL)

    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Tail " << tail->data << endl;
    cout << "head " << head->data << endl;
}

// gives length of linked list
int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)

    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

void deleteNode(int position,Node* &head){

//deleting first or start Node
if (position==1)
{
  Node* temp=head;
  temp->next->prev=NULL;
  head = temp->next;
  temp->next=NULL;
  delete temp;
}
else{
Node* curr = head;
Node* prev = NULL;

int cnt=1;
while(cnt<position){
    prev = curr;
    curr = curr -> next;
    cnt++;
}
curr->prev=NULL;
prev->next=curr->next;
curr->next=NULL;
delete curr;
}

}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head, tail);
    // cout<<"length of node "<<getlength<<endl;

    insertAtHead(head, 11);
    print(head, tail);
    insertAtHead(head, 21);
    print(head, tail);
    insertAtHead(head, 31l);
    print(head, tail);

    insertAtTail(tail, 12);
    print(head, tail);

    insertAtPosition(tail, head, 3, 100);
    print(head, tail);
    insertAtPosition(tail, head, 7, 102);
    print(head, tail);

    deleteNode(1,head);
    print(head,tail);

    return 0;
}