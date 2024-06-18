#include <iostream>
#include <vector>
using namespace std;


void reverseString(string& s, int start, int end){
    //base case
    if(start>=end){
        return;
    }

    //one case solve
    swap(s[start], s[end]);

    reverseString(s, start+1, end-1);


}

int main(){

    // string s = "abcd";
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int start = 0;
    int end = s.size()-1;

    reverseString(s, start, end);

    cout<<s<<endl;


}