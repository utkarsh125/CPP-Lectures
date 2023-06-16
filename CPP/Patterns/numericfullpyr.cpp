//NUMERIC FULL PYRAMID

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0;row<n;row++){

        //white spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        //row+1 elements
        for(int col=0; col< row+1; col++){
            cout<<row+col+1;
        }     
        //repeating numerics

        int start= 2*row;
        for(int col=0;col<row;col++){
            cout<<start;
            cout<<start-1;

        }
        cout<<endl;
    }
}