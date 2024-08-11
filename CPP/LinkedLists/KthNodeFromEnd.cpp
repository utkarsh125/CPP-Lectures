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
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

// int positionFromEnd(Node* &head, int target){

//     int length = getLength(head);
//     int positionFromStart = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data == target){
//             break;
//         }
//         temp = temp->next;
//         positionFromStart++;
//     }

//     //If the target element is not found then return -1
//     if(temp==NULL){
//         return -1;
//     }

//     return length-positionFromStart-1;
// }


//RECURSIVE APPROACH
int findKthFromEnd(Node* &head, int target) {

    // Base case: if the current node is NULL, return 0
    if (head == NULL) {
        return 0;
    }

    // Recursive call to find the position from the end
    int index = findKthFromEnd(head->next, target) + 1;

    // If the current node's data matches the target
    if (head->data == target) {
        std::cout << "The data " << target << " is at position " << index << " from the end." << std::endl;
        // return index; // Return the index, stopping further increments
    }

    // Continue unwinding the recursion stack
    return index; // This will just return the current index
}

int main(){

    Node* head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    // print(head);
    cout<<endl;
    int len = getLength(head);
    // cout<<len<<endl;
    int target = 2;
    // int position = positionFromEnd(head, target);
    int position = findKthFromEnd(head, target);
    cout<<position<<endl;

}
