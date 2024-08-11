#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void mergeTwoSortedLists(Node* &list1, Node* &list2) {
    // Create a dummy node to help with the merging process
    Node* dummy = new Node(0);
    Node* mptr = dummy; // Pointer to build the new list

    while (list1 && list2) {
        if (list1->data <= list2->data) {
            mptr->next = list1;
            list1 = list1->next;
        } else {
            mptr->next = list2;
            list2 = list2->next;
        }
        mptr = mptr->next; // Move the pointer to the end of the merged list
    }

    // Attach the remaining nodes from the non-empty list
    if (list1) {
        mptr->next = list1;
    } else {
        mptr->next = list2;
    }

    // Set the merged list head
    list1 = dummy->next;
    delete dummy; // Clean up the dummy node
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtHead(head1, 4);
    insertAtHead(head1, 2);
    insertAtHead(head1, 1);

    insertAtHead(head2, 4);
    insertAtHead(head2, 3);
    insertAtHead(head2, 1);

    cout << "List 1: ";
    print(head1);

    cout << "List 2: ";
    print(head2);

    mergeTwoSortedLists(head1, head2);

    cout << "Merged List: ";
    print(head1);

    return 0;
}
