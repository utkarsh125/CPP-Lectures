#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int cols){

    int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
} 

int getMin(int arr[][3], int rows, int cols){

    int mini = INT_MAX;

    for(int i=0; i<rows; i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini = arr[i][j];
            }
        }
    }

    return mini;
}

int main(){

    int arr[3][3];
    int rows=3;
    int cols=3;

    //INPUT

    //ROW WISE INPUT

    cout<<"ROW WISE INPUT"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >>arr[i][j];
        }
    }

    cout<<"PRINTING ROW WISE: "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Max Element is: "<< getMax(arr,rows,cols)<<endl;
    cout<<"The Min Element is: "<<getMin(arr,rows,cols)<<endl;
}