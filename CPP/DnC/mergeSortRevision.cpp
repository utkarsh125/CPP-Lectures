#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int start, int end){
    int mid = start + (end-start)/2;

    int len1 = mid-start+1;
    int len2 = end - mid;

    //dynamic allocation
    int* left = new int[len1];
    int* right = new int[len2];

    //copy values
    int k = start; //starting index is known
    for(int i = 0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i = 0;i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    //MERGE LOGIC
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;


    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(vector<int>& arr, int start, int end){
    //base case
    if(start>=end){ //if outside loop then return
        return;
    }
    int mid = start+(end-start)/2;
    //LEFT PART SOLVE
    mergeSort(arr, start, mid);
    //RIGHT PART
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}


int main(){

    vector<int> arr{38,27,43,3,9,82,10};
    int n = arr.size();

    int start = 0;
    int end = n-1;

    mergeSort(arr, start, end);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
