#include <iostream>

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Function to insert a node at the middle of the list
    void insertAtMiddle(int value) {
        if (head == nullptr) {
            insertAtStart(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* slow = head;
        Node* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->prev = slow;
        newNode->next = slow->next;
        if (slow->next != nullptr) {
            slow->next->prev = newNode;
        }
        slow->next = newNode;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList myList;

    // Insert at the start
    myList.insertAtStart(1);
    myList.display();

    // Insert at the end
    myList.insertAtEnd(3);
    myList.display();

    // Insert at the middle
    myList.insertAtMiddle(2);
    myList.display();

    return 0;
}
