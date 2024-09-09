#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &q){
    int n = q.size();
    if(n%2!=0){
        cout<<"Size must be even to interleave"<<endl;
        return;
    }

    int half = n/2;
    queue<int> firstHalf;

    for(int i = 0;i<half; i++){
        firstHalf.push(q.front());
        q.pop();
    }

    while(!firstHalf.empty()){
        //add element from first half to the main queue
        q.push(firstHalf.front());
        firstHalf.pop();

        //Add an element from the second half
        q.push(q.front());
        q.pop();
    }
}

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    interleave(q);

    print(q);
    return 0;
}
