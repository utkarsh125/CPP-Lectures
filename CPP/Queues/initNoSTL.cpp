#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size =size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //PUSH
    void push(int data){
        if(rear == size){
            cout<< "Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    //POP
    void pop(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    //FRONT()

    int getFront(){
        if(front == rear){
            cout<<"Q is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }else{
            return false;
        }
    }

    //SIZE
    int getSize(){
        return rear - front;
    }

};

int main(){

    Queue q(10);

    q.push(10);
    q.push(15);
    q.push(25);
    q.push(55);

    cout<<"Size of Queue: "<<q.getSize()<<endl;
    cout<<"Front of the queue: "<<q.getFront()<<endl;
    return 0;
}
