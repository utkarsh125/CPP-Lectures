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
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    else{
        //DLL not empty
        if(position == 1){
            insertAtHead(head, tail, data);
            return;
        }

        int len = getLength(head);
        if(position > len){
            insertAtTail(head, tail, data);
            return;
        }

        //Insert in middle
        //Step 1: Find prev and curr
        int i = 1;
        Node* prevNode = head;
        while(i<position-1){
            prevNode = prevNode -> next;
            i++;
        }
        Node* curr = prevNode -> next;

        //step 2: create a node
        Node* newNode = new Node(data);

        //step 3: next of prevNode points to newNode
        prevNode->next = newNode;

        //step 4: prev of newNode  points to prevNode
        newNode->prev = prevNode;

        //step 5: prev of current points to newNode
        curr -> prev = newNode;
        //step 6: next of newNode points to current
        newNode->next = curr;
    }
}
// void insertAtPosition(Node* &head, Node* &tail, int data, int position){
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     // DLL not empty
//     if(position == 1){
//         insertAtHead(head, tail, data);
//         return;
//     }

//     int len = getLength(head);
//     if(position > len){
//         insertAtTail(head, tail, data);
//         return;
//     }

//     // Insert in middle
//     int i = 1;
//     Node* prevNode = head;
//     while(i < position - 1){
//         prevNode = prevNode->next;
//         i++;
//     }
//     Node* curr = prevNode->next;

//     Node* newNode = new Node(data);

//     newNode->next = curr;
//     if (curr != NULL) {
//         curr->prev = newNode;
//     }
//     prevNode->next = newNode;
//     newNode->prev = prevNode;
// }




//Delete from the DLL
// void deleteNode(Node* &head, Node* &tail, int position){

//     if(head == NULL){
//         cout<<"DLL is empty";
//         return;
//     }

//     if(head->next == NULL){
//         //single node
//         Node* temp = head;
//         head = NULL;
//         tail = NULL;
//         delete temp;
//     }
//     //if position > len
//     int len = getLength(head);
//     if(position>len){
//         cout<<"Please enter a valid position";
//     }
//     // position 1
//     if(position == 1){
//         Node* temp = head;
//         head = head->next;
//         head->prev = NULL;
//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     //deletion from tail
//     if(position == len){
//         Node* temp = head;
//         tail = tail->prev;
//         tail->next = NULL;
//         tail->prev = NULL;
//         delete temp;
//         return;
//     }
//     //deletion from middle
//     //find prevNode, current, and nextNode
//     int i = 1;
//     Node* prevNode = head;
//     while(i < position - 1){
//         prevNode = prevNode->next;
//         i++;
//     }
//     Node* curr = prevNode->next;
//     Node* nextNode = curr->next;

//     //STEP 2:
//     prevNode->next = nextNode;
//     nextNode->prev = prevNode;
//     curr->next = NULL;
//     curr->prev = NULL;
//     delete curr;
// }

void deleteNode(Node* &head, Node* &tail, int position) {
    if (head == NULL) {
        cout << "DLL is empty";
        return;
    }

    // Handling position 0 case
    if (position == 0) {
        Node* temp = head;
        if (head->next != NULL) {
            head = head->next;
            head->prev = NULL;
        } else {
            head = NULL;
            tail = NULL;
        }
        delete temp;
        return;
    }

    // Single node case
    if (head->next == NULL) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    // if position > len
    int len = getLength(head);
    if (position > len) {
        cout << "Please enter a valid position";
        return;
    }

    // position 1 case
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    // deletion from tail
    if (position == len) {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    // deletion from middle
    // find prevNode, current, and nextNode
    int i = 1;
    Node* prevNode = head;
    while (i < position - 1) {
        prevNode = prevNode->next;
        i++;
    }
    Node* curr = prevNode->next;
    Node* nextNode = curr->next;

    // STEP 2:
    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
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
    cout<<"After insertion@tail: ";
    print(head);
    cout<<endl;
    insertAtPosition(head, tail, 101, 0);
    cout<<"After Insertion at Position 0: ";
    print(head);

    cout<<endl;
    deleteNode(head, tail, 0);
    cout<<"After deleting from position 0: ";
    print(head);
    return 0;
}
