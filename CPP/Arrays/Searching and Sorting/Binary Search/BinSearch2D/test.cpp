#include <iostream>
using namespace std;

bool binarySearch(int arr[][3], int rows, int cols, int target){

    int start = 0;
    int end = rows*cols-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex]==target){
            cout<<"FOUND AT ["<<rowIndex<<"]["<<colIndex<<"]"<<endl;
            return true;
        }
        else if(arr[rowIndex][colIndex]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start+(end-start)/2;
    }

    return false;
}

int main(){

    int arr[4][3] = {{1,2,3}, {5,6,7}, {9,10,11}};
    int n = 4;
    int m = 3;

    int target = 5;

    bool ans = binarySearch(arr,n,m,target);
    if(ans){
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }

}