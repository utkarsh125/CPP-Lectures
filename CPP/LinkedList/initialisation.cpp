#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAfterNode(Node* prevNode, int val) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    displayList(head); // Output: 1 2 3

    Node* middleNode = head->next;
    insertAfterNode(middleNode, 4);

    displayList(head); // Output: 1 2 4 3

    insertAtEnd(head, 5);

    displayList(head); // Output: 1 2 4 3 5

    return 0;
}
