#include<iostream>
#include<deque>
using namespace std;

int main(){
    //creation
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(4);
    dq.push_front(3);
    dq.push_back(6);

    cout<<dq.size()<<endl;
    dq.pop_front();
    cout<<dq.size()<<endl;

    cout<<"Front: "<<dq.front()<<endl;
    cout<<"Back: "<<dq.back()<<endl;

    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

    if(dq.empty()){
        cout<<"Empty";
    }
    return 0;
}
