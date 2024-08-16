#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        //LL Empty
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

Node* getMid(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next == NULL){
        //only one node in LL
        return head;
    }

    //SLOW FAST POINTER
    Node* slow = head;
    Node* fast = head->next;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

Node* mergeList(Node* &left, Node* &right){
    // Createa dummy node
    Node* dummy = new Node(1);
    Node* temp = dummy;

    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next = left;
            left = left->next;
        }else{
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }
    //if there are any remaining nodes in left or right list, append them
    if(left!=NULL){
        temp->next = left;
    }else if(right!=NULL){
        temp->next = right;
    }
    return dummy->next;
}

Node* sortList(Node* &head){

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* mid = getMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    //RE Call
    left = sortList(left);
    right = sortList(right);

    Node* mergedLL = mergeList(left, right);
    return mergedLL;
}

int main(){

    Node* head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 7);
    insertAtHead(head, 10);
    insertAtHead(head, 2);
    insertAtHead(head, 3);

    Node* result = sortList(head);
    print(result);
}
