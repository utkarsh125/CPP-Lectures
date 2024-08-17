#include <iostream>
#include <stack>
using namespace std;


void solve(stack<int> &s, int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    //recursive call
    solve(s, target);
    //BT
    s.push(topElement);
}

// void insertAtBottom(stack<int> &s){
//     if(s.empty()){
//         cout<<"Stack is empty, cannot insert at bottom"<<endl;
//         return;
//     }
//     int target = s.top();
//     s.pop();
//     solve(s, target);
// }

//OR
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


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);;

    insertAtBottom(s, 60);

    cout<<"Printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
