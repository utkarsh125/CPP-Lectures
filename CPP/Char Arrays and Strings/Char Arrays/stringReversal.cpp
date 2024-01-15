#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void reverseCharArray(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    // while(i<=j){
    //     swap(name[i], name[j]);
    //     i++;
    //     j--;
    // }

    for(;i<=j;){
        swap(name[i], name[j]);
        i++;
        j--;
    }

}

int main(){

    char name[100];
    cin >> name;
    cout<< "Initially: "<<name<<endl;
    reverseCharArray(name);
    cout<<"Reversal: "<<name<<endl;

}