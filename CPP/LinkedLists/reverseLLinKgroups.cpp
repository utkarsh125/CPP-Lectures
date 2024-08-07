#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* getMiddle(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next == NULL){
        //only 1 node in LL
        return head;
    }

    //LL have >1 Node
    Node* slow = head;
    Node* fast = head->next;//Change this to fast = head if you want mid+1

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast -> next;
            slow = slow->next;
        }
    }
    return slow;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverseNodes(Node* &head, int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    if(k>len){
        cout<<"Enter valid value for k"<<endl;
        return head;
    }

    //number of nodes in list is >=k
    //STEP 1: Reverse First k nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;

    while(count<k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    //STEP 2: Recursive Call
    if(forward != NULL){
        //WE STILL HAVE NODES LEFT TO REVERSE
        Node* recursionAnswer = reverseNodes(forward, k);
        head->next = recursionAnswer;
    }
    //STEP 3: Return head of the modified LL
    return prev;
}

int main(){

  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);

  head -> next = second;
  second-> next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  // sixth->next=NULL;

  print(head);
  // cout<<"MIDDLE NODE: "<<getMiddle(head) -> data << endl;
  head = reverseNodes(head, 4);
  print(head);
}
