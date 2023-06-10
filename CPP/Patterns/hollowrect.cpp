#include <iostream>
using namespace std;

int main()
{
    //HOLLOWRECTANGLE with 3Rows and 5Cols

    // for(int row = 0; row < 3; row++){
    //     if(row==0||row==2){
    //         for(int col=0;col<5;col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         //remaining middle rows
    //         //first star
    //         cout<<"* ";
    //         //spaces
    //         for(int i=0;i<3;i++){
    //             cout<<"  ";
    //         }
    //         //last star
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //HOLLOW RECTANGLE WITH 5 Rows and 6 Columns

    for(int row=0;row<6;row++){
        if(row==0||row==5){
            for(int col=0;col<7;col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";

            for(int i=0;i<5;i++){
                cout<<"  ";
            }
            //last star
            cout<<"* ";
        }
        cout<<endl;
    }

}