#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Row and Col Count: "<<endl4;
    int rowCount, colCount;
    cin>>rowCount;
    cin>>colCount;

    //Hollow Rectangle
    for(int row=0;row<rowCount;row++){
        if(row==0||row==rowCount-1){
            for(int col=0;col<colCount;col++){
                cout<<"* ";
            }
        }
        else{
            //remaining middle rows
            //first star
            cout<<"* ";
            //spaces
            for(int i=0; i<colCount-2; i++){
                cout<<"  ";
            }
            //last star
            cout<<"* ";
        }
        cout<<endl;

    }


}