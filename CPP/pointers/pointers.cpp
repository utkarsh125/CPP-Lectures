#include <iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<num<<endl;

    //address of Operator - &

    cout<<"Address of num: "<< &num <<endl;

    int *ptr = &num;

    cout<<"Value of ptr is: "<<*ptr<<endl;
}