#include<iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);

    //size
    cout<<"QUEUE SIZE: "<<q.size()<<endl;

    if(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }else{
        cout<<"QUEUE IS EMPTY";
    }
}
