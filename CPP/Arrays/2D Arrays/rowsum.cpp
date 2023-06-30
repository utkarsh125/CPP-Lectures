#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][4], int rows, int cols){

    //ROW-SUM--->ROW TRAVERSAL
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){

            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }   
}

int main(){
    
    cout<<"INPUT IN 2D ARRAY-------------"<<endl;

    int arr[5][4];
    int rows = 5;
    int cols = 4;

    cout<<"ROW WISE INPUT"<<endl;
    //ROW-WISE INPUT

    for(int i=0;i<rows;i++){
        //ON COL
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    printRowWiseSum(arr, rows, cols);
}