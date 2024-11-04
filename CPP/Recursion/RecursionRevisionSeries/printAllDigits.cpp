#include<iostream>
using namespace std;

void printDigits(int x){

    if(x==0){
        return;
    }


    printDigits(x/10);

    //Back Recursion
    int newValueOfX = x/10;
    int digits = x%10;
    cout<<digits<<" ";

    // int newValueOfX = x/10;


}

int main(){

    int x = 647;
    printDigits(x);
}
