#include<iostream>
#include<vector>
using namespace std;

// int lastOccOfChar(string str, char x){

//     int maxIndex = 0;
//     for(int i = 0; i<str.length(); i++){
//         if(str[i] == x){
//             //update maxIndex
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
//

int lastOccOfChar(string str, char x, int i, int &maxIndex){

    //base case
    if(i>=str.length()){
        return maxIndex;
    }

    //current case
    if(str[i] == x){
        maxIndex = i;
    }

    lastOccOfChar(str, x, i+1, maxIndex);
    return maxIndex;
}

int main(){

    string str = "abcddefg";
    //find last occurrence of x = 'd'
    char x = 'd';
    int i = 0;
    int maxIndex = -1; //default -1 if it is not found
    // int res = lastOccOfChar(str, x);
    int res = lastOccOfChar(str, x, i, maxIndex);
    cout<<res<<endl;
}
