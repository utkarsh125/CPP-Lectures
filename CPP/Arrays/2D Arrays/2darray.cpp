#include <iostream>
using namespace std;

int main(){

    //initialization
    int brr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<brr[2][2]<<endl;

    cout<<"ROW WISE PRINT"<<endl;

    //row-wise print
    //out loop

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"COLUMN WISE PRINT"<<endl;
    //Just replace i with j   
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"INPUT IN 2D ARRAY-------------"<<endl;

    int arr[4][3];
    int rows = 4;
    int cols = 3;

    cout<<"ROW WISE INPUT"<<endl;
    //ROW-WISE INPUT

    for(int i=0;i<rows;i++){
        //ON COL
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }

    }

    //OUTPUT ROW-WISE
    cout<<"ROW WISE OUTPUT"<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}