#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
     Node* temp = head;
     while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
     }
}

// Insertion at the head of a linked list
void insertAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        //mtlb LL empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1: Create new Node
    Node* newNode = new Node(data);
    // Step 2: Next pointer of newNode to head
    newNode->next = head;
    // Step 3: Update head to newNode
    head = newNode;
}

// Insertion at the tail of a linked list
void insertAtTail(Node* &head, Node* &tail, int data){

    if(head == NULL){
        //mtlb LL empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1: Create new Node
    Node* newNode = new Node(data);
    // Step 2: Update tail's next to newNode if tail is not NULL
    tail->next = newNode;
    // Step 3: Update tail to newNode
    tail = newNode;
}

//LENGTH FINDING LL
int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //STEP 1 --> Find the position: prev and current
    // int i = 1;
    if(position <= 0){
        insertAtHead(head, tail, data);
        return;
    }
    int len = findLength(head);
    if(position >= len){
        insertAtTail(head, tail, data);
        return;
    }
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev -> next;
        i++;
    }

    Node* current = prev->next;

    //STEP2
    Node* newNode = new Node(data);

    //STEP3
    newNode -> next = current;

    //STEP4
    prev -> next = newNode;
 }

//DELETE NODE
void deleteNode(int position, Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"Cannot delete, LL is empty";
        return;
    }

    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete(temp);
    }
}

Node* reverse(Node* &prev, Node* &curr){
    //base case
    if(curr == NULL){
        //LL reversed
        return prev;
    }

    //1 case solve kro
    Node* forwardNode = curr->next;
    curr->next = prev;

    reverse(curr, forwardNode);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    cout<<"Before Reversal: ";
    print(head);
    cout<<endl;

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);
    cout<<"After reversal: ";
    print(head);
    cout<<endl;


    return 0;
}
