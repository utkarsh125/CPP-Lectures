#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool isValid(string s) {

        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                // Closing bracket
                if (!st.empty()) {
                    char topChar = st.top();
                    if (ch == ')' && topChar == '(') {
                        // Matching brackets
                        st.pop();
                    } else if (ch == ']' && topChar == '[') {
                        // Matching brackets
                        st.pop();
                    } else if (ch == '}' && topChar == '{') {
                        // Matching brackets
                        st.pop();
                    } else {
                        // Brackets not matching
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return st.empty();
}

int main() {
    string s;

    cout << "Enter a string containing brackets: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
