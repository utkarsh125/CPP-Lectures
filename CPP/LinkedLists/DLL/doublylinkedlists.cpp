#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

     Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp-> data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    //Step 1: Create a new Node
    Node* newNode = new Node(data);
    //Step 2: Next pointer of newNode to head
    newNode -> next = head;
    //Step 3: prev pointer of head to newNode
    head->prev = newNode;
    //Step 4: Update head
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    //if tail is empty then create newNode and make it head and tail both since 1 element only
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //if not empty then
    //Step 0: Create a newNode anyway
    Node* newNode = new Node(data);
    //Step 1: update newNode with current tail
    tail->next = newNode;
    //Step 2: update the prev node of the newNode as tail
    newNode->prev = tail;
    //Step 3: update the tail with the new node;
    tail = newNode;
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

int main(){

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);

    // first->next = second;
    // second->prev = first;

    // second->next = third;
    // third->prev = second;

    // print(first);
    // getLength(first);

    // Node* head = new Node(10);
    // Node* first = new Node(20);
    // Node* second = new Node(30);
    // Node* tail = new Node(40);

    // head->next = first;
    // first->prev = head;

    // first->next = second;
    // second->prev = first;

    // second->next = tail;
    // tail->prev = second;

    // cout<<"Before Insertion: ";
    // print(head);
    // insertAtHead(head, tail, 40);
    // cout<<endl;

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);

    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 90);
    cout<<"After insertion: ";
    print(head);
    return 0;
}
