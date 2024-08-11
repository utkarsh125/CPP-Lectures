#include <cinttypes>
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

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        //LL Empty
        Node* newNode = new Node(data);
        head = newNode;
        return;
        // tail = newNode;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//Removing Duplicates
void removeDuplicates(Node* &head){

    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        cout<<"Single node in LL"<<endl;
    }

    //GREATER THAN 1 NODE
    Node* curr = head;

    while(curr != NULL){
        if((curr->next != NULL) && curr -> data == curr->next->data){
            Node* temp = curr -> next;
            curr->next = curr->next->next;

            //delete Node
            temp -> next = NULL;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}

int main(){

    Node* head = NULL;

    // insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    cout<<"LL is:";
    print(head);
    cout<<endl;
    removeDuplicates(head);
    cout<<"After removal of duplicates: ";
    print(head);

    return 0;
}
