#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int start, int end, int target){
    if(start > end){
        return -1;
    }

    int mid = start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
    }

    if(target<arr[mid]){
        return binarySearch(arr, start, mid-1, target);
    }
    else{
        return binarySearch(arr, mid+1, end, target);
    }
}

int main(){

    vector<int> arr{1,2,3,4,5,6};
    int end = arr.size();
    int start = 0;
    int target = 8;

    int i = 0;
    int index = binarySearch(arr, start, end, target);
    if(index!=-1){
        cout<<"Element found at Index: "<<index<<endl;
    }else{
        cout<<"ELEMENT NOT FOUND!";
    }
}
