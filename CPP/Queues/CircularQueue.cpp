#include<iostream>
using namespace std;


class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    int data;

    CirQueue(int size){
        this->size = size;
        arr = new  int[size];
        front = -1;
        rear = -1;

    }

    void push(int data){
        //Queue Full
        //Single Element Case --> First Element
        //Circular Nature
        //Default Flow

        if((front == 0 && rear == size-1)){
            //Queue Full
            cout<<"Queue is Full, cannot insert element"<<endl;
        }

        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size-1 && front != 0){
            //First index empty
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }
    void pop(){

        //Empty Check
        //Single Element
        //Circular Nature Maintenance

        if(front==-1){
            cout<<"Queue is empty; cannot pop";
        }
        else if(front == rear){
            //single element
            arr[front] = -1;
            front = rear = -1;

        }
        else if(front == size - 1){
            front = 0;
        }
        else{
            front++;
        }

    }

};


int main(){


}
