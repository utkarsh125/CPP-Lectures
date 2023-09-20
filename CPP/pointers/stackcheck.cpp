#include <iostream>
#include <stack>
using namespace std;

bool stack_check(stack<int> v){

    if(!v.empty()){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
}

int main(){

    stack<int> v;
    v.push(5);
    v.push(4);
    v.push(3);

    cout<<stack_check(v)<<endl;

    while(!v.empty()){
        cout<<v.top()<<endl;
        v.pop();
    }

    cout<<stack_check(v)<<endl;
}