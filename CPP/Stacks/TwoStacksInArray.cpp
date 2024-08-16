#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;  // Corrected initialization
        top2 = size;
    }

    void push1(int data){
        if(top2 - top1 == 1){
            //space not available
            cout<<"OVERFLOW in ST1"<<endl;

        }else{
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout<<"STACK UNDERFLOW IN ST1"<<endl;
        }else{
            //stack not empty
            arr[top1] = 0;
            top1--;
        }
    }
    void push2(int data){
        if(top2 - top1 == 1){
            //space not available
            cout<<"OVERFLOW in ST2"<<endl;
        }else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            //stack 2 is empty
            cout<<"UNDERFLOW IN ST2"<<endl;
        }else{
            top2++;
        }
    }

    //DO NOT DO THIS IN QUESTIONS OR INTERVIEWS, THIS IS FOR EXPLANATION ONLY
    void print(){
        cout<<endl;
        cout<<"TOP1: "<<top1<<endl;
        cout<<"TOP2: "<<top2<<endl;
        for(int i =0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Stack s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(110);
    s.print();
    s.push2(210);
    s.print();
    s.push2(310);
    s.print();
    s.push2(410);
    s.print();
    s.push2(510);
    s.print();

    // s.push1(1000);
    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();

    #include <iostream>
    using namespace std;

    class Stack{
        public:
        int* arr;
        int size;
        int top1;
        int top2;

        Stack(int size){
            arr = new int[size];
            this->size = size;
            top1 = -1;  // Corrected initialization
            top2 = size;
        }

        void push1(int data){
            if(top2 - top1 == 1){
                //space not available
                cout<<"OVERFLOW in ST1"<<endl;

            }else{
                top1++;
                arr[top1] = data;
            }
        }

        void pop1(){
            if(top1 == -1){
                cout<<"STACK UNDERFLOW IN ST1"<<endl;
            }else{
                //stack not empty
                top1--;
            }
        }
        void push2(int data){
            if(top2 - top1 == 1){
                //space not available
                cout<<"OVERFLOW in ST2"<<endl;
            }else{
                top2--;
                arr[top2] = data;
            }
        }

        void pop2(){
            if(top2 == size){
                //stack 2 is empty
                cout<<"UNDERFLOW IN ST2"<<endl;
            }else{
                top2++;
            }
        }

        //DO NOT DO THIS IN QUESTIONS OR INTERVIEWS, THIS IS FOR EXPLANATION ONLY
        void print(){
            cout<<endl;
            cout<<"TOP1: "<<top1<<endl;
            cout<<"TOP2: "<<top2<<endl;
            for(int i =0; i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    };

    int main(){

        Stack s(10);

        s.push1(10);
        s.print();
        s.push1(20);
        s.print();
        s.push1(30);
        s.print();
        s.push1(40);
        s.print();
        s.push1(50);
        s.print();

        s.push2(110);
        s.print();
        s.push2(210);
        s.print();
        s.push2(310);
        s.print();
        s.push2(410);
        s.print();
        s.push2(510);
        s.print();

    }

}
