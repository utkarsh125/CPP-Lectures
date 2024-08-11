#include<iostream>
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

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head -> next == NULL){
        //1 node
        return true;
    }

    //>1 node

    //STEP1: Find the middle node
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow -> next;
        }
    }

    //slow pointer is pointing to middle node
    return slow;

    //STEP2: Reverse LL after middle node

    Node* reverseLLhead = reverse(slow -> next);

    slow -> next = reverseLLhead;

    //STEP3: Start comparison using two pointers
    Node* temp1 = head;
    Node* temp2 = reverseLLhead;
    while(temp2 != NULL){
        if(temp1 -> data != temp2 ->data){
            //NOT PALINDROME
            return false;
        }
        else{
            //IF DATA IS EQUAL, move forward
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main(){

  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);

  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = NULL;

  bool isPalindrome(head);

  if(isPalindrome){
      cout<<"P"<<endl;
  }else{
      cout<<"NP"<<endl;
  }
}
