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

// void push(Node* &head, int newData){
//     Node* newNode = new Node(newData);
//     // newNode->next = head;
//     if(head == NULL){
//         head = newNode;
//         newNode->next = head; //points to itself, since it the LL is circular
//     }else{
//         Node* temp = head;
//         while(temp->next != head){
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//         head = newNode;
//     }

// }

//input -> data --> if data found then add newNode

void insertNode(Node* &tail, int element, int data){
    //assuming that the element is the present in the linked list
    //Check if list is empty
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //LIST NON-EMPTY
        //Assuming that the element is present in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        //ELEMENT FOUND
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail){
    int count = 0;
    Node* temp = tail;

    do{
        cout<< tail->data <<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;

    //Insertion in empty list
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);
    print(tail);
}
