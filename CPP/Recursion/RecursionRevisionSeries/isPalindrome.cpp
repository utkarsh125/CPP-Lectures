#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isPalindrome(vector<char> vec, int start, int end, int &flag){

    //base case
    if(start>=end){
        return flag;
    }

    //current case
    if(vec[start]!=vec[end]){
        flag = 0;
    }

    //recursive call
    isPalindrome(vec, start+1, end-1, flag);
    return flag;
}

int main(){

    vector<char> vec{'b','o','i','b'};
    int start = 0;
    int end = vec.size()-1;
    int flag = 1;
    isPalindrome(vec, start, end, flag);
    cout<<flag;

}
