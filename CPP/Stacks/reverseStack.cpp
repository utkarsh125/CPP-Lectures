#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target) {

         //base case
        if(s.empty()) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        //rec cal
        insertAtBottom(s, target);
        //BT
        s.push(topElement);

}

void reverseStack(stack<int> &s){

    //base case
    if(s.empty()){
        return;
    }


    int target = s.top();
    s.pop();
    //insert target at bottom when stack is reversed
    reverseStack(s);
    //Insert at bottom
    insertAtBottom(s, target);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
