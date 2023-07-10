#include <iostream>
#include <vector>

using namespace std;

void transpose(int arr[][3],int rows, int cols, int transposeArr[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols; j++){
            // swap(arr[i][j],arr[j][i]);
            transposeArr[j][i]=arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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

    int transposeArr[3][3];
    transpose(arr,rows,cols, transposeArr);
    cout<<"TRANSPOSE OF THIS MATRIX IS: "<<endl;
    printArray(transposeArr,rows,cols);

}