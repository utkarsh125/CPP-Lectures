#include <iostream>
using namespace std;

class NStack{
    int *a, *top, *next;
    int n;//no. of stacks
    int size;//size of main array
    int freeSpot;//tells free space index in main array

    public:
    NStack(int _n, int _s):n(_n), size(_s){
        freeSpot = 0;
        a = new int[size];
        top = new int[n];
        next = new int[size];

        for(int i = 0; i<n; i++){
            top[i] = -1;
        }

        for(int i = 0; i<size; i++){
            next[i] = i+1;
        }

        next[size-1] = -1;
    }

    //PUSH X into mth stack
    bool push(int X, int m){
        if(freeSpot == -1){
            return false; //STACK OVERFLOW
        }

        //1. Find Index
        int index = freeSpot;

        //2. Update FreeSpot
        freeSpot = next[index];

        //3. Insert
        a[index] = X;

        //4. Update Next
        next[index] = top[m-1];

        //5. Update top
        top[m-1] = index;

        return true;//push success

    }

    //pop from mth Stack || REVERSE PUSH OP
    int pop(int m){
        if(top[m-1] == -1){
            return -1; //STACK UNDERFLOW
        }

        int index = top[m-1];
        top[m-1] = next[index];
        int poppedElement = a[index];
        next[index] = freeSpot;
        freeSpot = index;
        return poppedElement;
    }

    //DESTRUCTOR
    ~NStack(){
        delete[] a;
        delete[] top;
        delete[] next;
    }
};

int main(){

    NStack s(3,6);

    //FIRST STACK
    cout<<s.push(9,1)<<endl;
    cout<<s.push(10,1)<<endl;

    //SECOND STACK
    cout<<s.push(11,2)<<endl;
    cout<<s.push(12,2)<<endl;

    //THIRD STACK
    cout<<s.push(13,3)<<endl;
    cout<<s.push(14,3)<<endl; //COULD NOT BE PUSHED DUE TO OVERFLOW

    //POP OPERATION
    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    return 0;
}
