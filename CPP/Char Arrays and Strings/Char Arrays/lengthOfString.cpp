#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[]){

    int length = 0;
    int i = 0;
    
    //JAB TAK NULL CHARACTER NA MILE
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){

    char name[100];
    cin >> name;
    cout<<"LENGTH: "<<getLength(name)<<endl;
    cout<<"OR YOUR CAN USE strlen(): ";
    cout<<strlen(name);
    
}