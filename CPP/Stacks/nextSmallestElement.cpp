#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    stack<int> s;
    vector<int> ans(v.size(), -1);  // Initialize ans with -1 assuming no smaller element exists.

    for (int i = v.size() - 1; i >= 0; i--) {
        int curr = v[i];

        // Pop elements from the stack while they are greater than or equal to the current element
        while (!s.empty() && s.top() >= curr) {
            s.pop();
        }

        // If stack is not empty, then the top of the stack is the next smaller element
        if (!s.empty()) {
            ans[i] = s.top();
        }

        // Push the current element into the stack
        s.push(curr);
    }

    // Print the resulting answer array
    cout << "PRINTING: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
