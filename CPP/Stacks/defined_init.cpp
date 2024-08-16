#include <iostream>
using namespace std;

class Stack {
    // public:
    private:
    int *arr;
    int top;
    int size;

    public:
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1; //index of top element, initialized from -1 because 0 is valid index
    }

    //Function

    void push(int data){

        if(size-top >1){
            //space available
            //insert
            top++;
            arr[top] = data;
        }else{
            //space not available
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        //
        if(top==-1){
            //stack is empty
            cout<<"STACK UNDERFLOW!"<<endl;
        }else{
            top--;
        }
    }

    int getTop(){
        if(top==-1){
            //NO ELEMENT IN STACK
            cout<<"STACK EMPTY"<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        //RETURNS NUMBER OF VALID ELEMENTS PRESENT IN STACK
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};


int main(){


    Stack s(5);


    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"SIZE AFTER DELETION: "<<s.getSize()<<endl;
    s.pop();
    return 0;
}
