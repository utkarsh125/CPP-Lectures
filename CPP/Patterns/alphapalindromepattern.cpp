//ALPHABET PALINDROME PYRAMID
//FIRST MAKE HALF PYRAMID (LEFT)

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    for(int row=0;row<n;row++){

        int col=0;
        for(col=0;col<row+1;col++){

            int ans = col + 1;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        //reverse counting printing
        // col=col-1;
        // for(;col>=1;col--){
        //     cout<<col;
        // }

        //whatever my row number is, 
        //from that row number loop to one

        for(int col=row; col>=1; col--){
            int ans = col;
            char ch = ans + 'A'-1;
            cout<<ch;
        }

        cout<<endl;
    }
}