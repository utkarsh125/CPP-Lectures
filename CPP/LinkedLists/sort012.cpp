#include <iostream>
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
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node*& head, int data) {
    if (head == NULL) {
        // Linked List is empty
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// BRUTE FORCE SORTING FUNCTION (Kept for reference)
// void sort(Node* head) {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node* temp = head;

//     while(temp != NULL) {
//         // STEP 1: Find count of zeros, ones, twos.
//         if(temp->data == 0) {
//             zeroCount++;
//         } else if(temp->data == 1) {
//             oneCount++;
//         } else if(temp->data == 2) {
//             twoCount++;
//         }
//         temp = temp->next;
//     }

//     // STEP 2: Fill 0s, 1s, 2s in the original Linked List
//     temp = head;
//     while(temp != NULL) {
//         // Fill zeros
//         while(zeroCount--) {
//             temp->data = 0;
//             temp = temp->next;
//         }

//         // Fill ones
//         while(oneCount--) {
//             temp->data = 1;
//             temp = temp->next;
//         }

//         // Fill twos
//         while(twoCount--) {
//             temp->data = 2;
//             temp = temp->next;
//         }
//     }
// }

// DUMMY NODE APPROACH
Node* dummySort(Node* head) {

    // CREATE 3 DUMMY NODES
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // Traverse the original Linked List
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == 0) {
            zeroTail->next = curr;
            zeroTail = curr;
        } else if (curr->data == 1) {
            oneTail->next = curr;
            oneTail = curr;
        } else if (curr->data == 2) {
            twoTail->next = curr;
            twoTail = curr;
        }
        curr = curr->next;
    }

    // Ensure the last nodes of zeroTail, oneTail, and twoTail do not point to old nodes
    zeroTail->next = NULL;
    oneTail->next = NULL;
    twoTail->next = NULL;

    // Join the lists together
    if (oneHead->next != NULL) {  // If the list containing 1s is not empty
        zeroTail->next = oneHead->next;
    } else {  // If the list containing 1s is empty
        zeroTail->next = twoHead->next;
    }

    if (twoHead->next != NULL) {  // If the list containing 2s is not empty
        oneTail->next = twoHead->next;
    }

    // Remove dummy nodes and return the head of the sorted list
    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 0);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    insertAtHead(head, 1);
    insertAtHead(head, 2);

    cout << "Original List: ";
    print(head);

    // Uncomment the following line to use brute force sorting
    // sort(head);

    head = dummySort(head);  // Update the head after sorting

    cout << "\nAfter Sorting: ";
    print(head);

    return 0;
}
