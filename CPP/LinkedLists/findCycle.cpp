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

bool checkForLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            //loop present
            return true;
        }
    }
    //fast NULL hogya
    return false;
}

Node* startingPointOfLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            //loop present
            slow = head; //step 2
            break;
        }
    }

    while(slow!=fast){
        slow = slow->next;//1 step
        fast = fast->next;//1 step
    }

    return slow;
}

Node* removeLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            //loop present
            slow = head; //step 2
            break;
        }
    }

    //prev pointer
    Node* prev = fast;

    while(slow!=fast){
        prev = fast;
        slow = slow->next;//1 step
        fast = fast->next;//1 step
    }

    prev -> next = NULL;
    return slow;
}


int main(){

  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eighth = new Node(90);
  Node* ninth = new Node(90);

  head -> next = second;
  second-> next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eighth;
  eighth->next = ninth;
  ninth->next =fifth;

  // print(head); ---> INFINTE LOOP
  cout<<"Loop is Present or Not: "<<checkForLoop(head)<<endl;
  cout<<"STARTING POINT OF LOOP: "<<startingPointOfLoop(head) -> data << endl;
  removeLoop(head);
  // cout<<"Loop is Present or Not: "<<bool(checkForLoop(head))<<endl;
  print(head);
  cout<<"Loop is Present or Not: "<<checkForLoop(head)<<endl;
}
