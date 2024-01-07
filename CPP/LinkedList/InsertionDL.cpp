#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insertAtStart(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head==nullptr){
            head=newNode;
        }else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp -> next;
            }

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void insertAtMiddle(int value){
        if(head==nullptr){
            insertAtStart(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* slow = head;
        Node* fast = head->next;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        newNode -> prev = slow;
        newNode -> next = slow -> next;
        if(slow->next!=nullptr){
            slow->next->prev = newNode;
        }

        slow -> next = newNode;
    }


    void display(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data <<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main(){
    DoublyLinkedList myList;

    myList.insertAtEnd(1);
    myList.display();

    myList.insertAtEnd(4);
    myList.display();

    myList.insertAtMiddle(3);
    myList.display();

    return 0;
}