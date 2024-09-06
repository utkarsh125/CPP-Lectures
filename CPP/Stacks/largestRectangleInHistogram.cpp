#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> findPrevSmallerIndex(const vector<int>& heights) {
    vector<int> psi(heights.size(), -1);  // Initialize with -1 for elements with no smaller to the left
    stack<int> s;

    for (int i = 0; i < heights.size(); i++) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        if (!s.empty()) {
            psi[i] = s.top();
        }
        s.push(i);
    }
    return psi;
}

vector<int> findNextSmallerIndex(const vector<int>& heights) {
    vector<int> nsi(heights.size(), heights.size());  // Initialize with heights.size() for elements with no smaller to the right
    stack<int> s;

    for (int i = heights.size() - 1; i >= 0; i--) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        if (!s.empty()) {
            nsi[i] = s.top();
        }
        s.push(i);
    }
    return nsi;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> psi = findPrevSmallerIndex(heights);
    vector<int> nsi = findNextSmallerIndex(heights);
    int maxArea = 0;

    for (int i = 0; i < heights.size(); i++) {
        int width = nsi[i] - psi[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 4, 3};
    cout << "Maximum Rectangle Area: " << largestRectangleArea(heights) << endl;
    return 0;
}
