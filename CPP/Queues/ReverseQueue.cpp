#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

//Recursively
void reverseQueueRecursively(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    //step 1
    int temp = q.front();
    q.pop();

    //step 2
    reverseQueueRecursively(q);

    //step 3
    q.push(temp);
}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // reverse(q);
    reverseQueueRecursively(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
