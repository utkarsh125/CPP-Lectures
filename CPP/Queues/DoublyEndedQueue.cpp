#include <iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    int data;

    Deque(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data){
        if((front==0 && rear == size - 1)){
            //Queue Full
            cout<<"Deque is full cannot insert element"<<endl;
        }
        else if(front == -1){
            //single element
            front = rear = 0;
            arr[rear] = data;
        }

        else if(rear == size-1 && front!=0){
            //First index empty
            rear = 0;
            arr[rear] = data;
        }else{
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data){
        if((front == 0 && rear == size-1)){
            cout<<"Queue is Full"<<endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0  && rear != size-1){
            front = size -1;
        }
        else{
            front--;
        }

        arr[front] = data;
    }

    void popFront(){
        if(front == -1){
            cout<<"Q is empty"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    void popRear(){
        if(front == -1){
            cout<<"Queue is empty, cannot pop"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            rear = size - 1;
        }
        else{
            rear--;
        }
    }
};

int main(){

    return 0;
}
