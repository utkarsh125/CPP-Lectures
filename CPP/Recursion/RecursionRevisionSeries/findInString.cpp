#include<iostream>
#include<string>
using namespace std;

bool find(string str, int i, int size, char key){

    if(i>=size){
        return false; //--> NOT FOUND;
    }

    if(str[i] == key){
        return true;
    }
    return find(str, i+1, size, key);
}

int main(){

    string str = "utkarsh";
    char key = 's';
    // bool flag = false;
    bool res = find(str, 0,str.length(),  key);
    cout<<res;
}
