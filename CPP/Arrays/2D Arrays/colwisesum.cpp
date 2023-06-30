#include <iostream>
using namespace std;

void printColWiseSum(int arr[][3], int rows, int cols){
    //COL-SUM--->COL TRAVERSAL
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main(){
    
    cout<<"INPUT IN 2D ARRAY-------------"<<endl;

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout<<"COLUMN WISE INPUT"<<endl;
    //ROW-WISE INPUT

    for(int i=0;i<rows;i++){
        //ON COL
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    printColWiseSum(arr, rows, cols);
}