//let's say you have a string then you need to find
//the last position of the given array

//you can go L to R
//or you can go R to L

//or you can use STL::strrchar()

#include <iostream>
using namespace std;

// void lastOccLTR(string& s, char x, int i, int& ans){
    

//     //base case
//     if(i>=s.size()){
//         return;
//     }
    
//     //solve one case 
//     if(s[i] == x){
//         ans = i;
//     }

//     //Baaki ---> Recursive Call
//     lastOccLTR(s, x, i+1, ans);


// }

void lastOccRTL(string& s, char x, int i, int& ans){

    //base case
    if(i<0){
        return;
    }

    //solve one case --> from right the first element would be the last occurrence
    if(s[i] == x){
        //update ans
        ans = i;
        return; //on one occ
    }

    lastOccRTL(s, x, i-1, ans);
}

int main(){

    string s;
    cin>>s;

    char x;

    cin>>x;

    int ans = -1;

    // int i = 0;
    int i = s.size() - 1;
    // lastOccLTR(s, x, i, ans);
    // cout<<ans<<endl;

    lastOccRTL(s,x,i, ans);
    cout<<ans<<endl;
}