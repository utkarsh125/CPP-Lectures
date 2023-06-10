#include <iostream>
using namespace std;

int main(){

    //numebr of rows
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}