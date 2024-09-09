
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKelements(queue<int> &q, int k){
    //Starting K elments to be inserted in stack
    stack<int> s;
    int count = 0;
    int n = q.size();

    if(k<=0 || k>n){
        return;
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    //Stack to Queue
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    //Push (n-k) elements from q front to back
    count = 0;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseKelements(q, 3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
