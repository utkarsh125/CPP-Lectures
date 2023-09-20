#include <iostream>
using namespace std;

int stack[100],n=100, top = -1;
void push(int element){
    //n is the size of the stack
    //top is the topmost poition of the stack
    if(top>=n-1){
        cout<<"The stack is full"<<endl;
        // stack full --> overflow
    }
    else{
        top++;
        stack[top] = element;
    }
}

void pop(int element){
    if(top<=-1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The popped element is :"<<stack[top]<<endl;
        top--;
    }
}



int main() {
    int val;
    
   
    cin>>val;
    push(val);
    
    
    return 0;
}