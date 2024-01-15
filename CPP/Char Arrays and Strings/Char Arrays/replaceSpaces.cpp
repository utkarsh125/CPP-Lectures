#include <iostream>
#include <string.h>
using namespace std;


void replaceSpace(char sentence[]){
    int i = 0;
    int n = strlen(sentence);
    // int j = n - 1;

    for(int i = 0; i<n; i++){
        if(sentence[i]==' '){
            sentence[i] = '@';
        }
    }

}

int main(){

    char x[100];
    cin.getline(x,50);
    cout<<"BEFORE: "<<x<<endl;
    replaceSpace(x);
    cout<<"AFTER: "<<x<<endl;
}