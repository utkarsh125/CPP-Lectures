#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target){

    int start = 0;
    int end = rows*cols-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        int rowIndex = mid/cols;
        int colIndex = mid%cols; 

        if(arr[rowIndex][colIndex]==target){
            return true;
        } 

        else if(arr[rowIndex][colIndex]<target){
            //search in right
            start - mid + 1;
        }

        else{
            //search in left
            end = mid - 1;
        }

        mid = start+(end-start)/2;
    }

    return false;

}

int main(){

    int arr[5][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20} };


    int rows = 5;
    int cols = 4;

    int target = 19;

    bool ans = binarySearch(arr,rows,cols,target);

    if(ans==true){
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}