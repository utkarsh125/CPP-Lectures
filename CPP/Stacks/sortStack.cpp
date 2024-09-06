#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int target) {
    // Base case: if stack is empty or top element is smaller than or equal to target, push target
    if (s.empty() || s.top() >= target) {
        s.push(target);
        return;
    }

    // Otherwise, pop the top element and call insertSorted recursively
    int topElement = s.top();
    s.pop();
    insertSorted(s, target);

    // Backtracking: push the previously popped element back onto the stack
    s.push(topElement);
}

void sortStack(stack<int> &s) {
    // Base case: if stack is empty, return
    if (s.empty()) {
        return;
    }

    // Remove the top element
    int topElement = s.top();
    s.pop();

    // Recursively sort the remaining stack
    sortStack(s);

    // Insert the removed element back into the sorted stack
    insertSorted(s, topElement);
}

int main() {
    stack<int> s;
    s.push(7);
    s.push(5);
    s.push(3);
    s.push(9);
    s.push(11);

    // Sort the stack
    sortStack(s);

    // Display the sorted stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
