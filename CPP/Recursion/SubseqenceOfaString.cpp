#include<iostream>
using namespace std;


void printSubsequences(string str, string output, int i){
    
    //base case
    if(i>=str.length()) {
        cout<<output<<endl;
        return;
    }

    //exclude case
    printSubsequences(str, output, i+1);

    //include case
    //below line is responsible for concatenation of output string 
    //ans ith character of string str
    // output.push_back(str[i]);
    output = output + str[i];
    printSubsequences(str, output, i+1);
}

int main(){
    string str = "abc";
    string output = ""; //empty on start
    int i = 0;//Traverse counter
    printSubsequences(str, output, i);
    return 0;
}