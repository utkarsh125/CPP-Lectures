#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int start, int end){

    int mid = start+(end-start)/2;

    //CREATE TWO ARRAYS
    int leftLength = mid - start + 1;
    int rightLength = end - mid;

    int *first = new int[leftLength];
    int *second = new int[rightLength];

    //copy values REMEMBER THAT k is the main array index
    //FIRST ARRAY COPY
    int mainArrayindex = start;
    for(int i=0; i<leftLength; i++){
        first[i] = arr[mainArrayindex++];
    }

    //FOR SECOND ARRAY COPY
    mainArrayindex = mid+1; //STARTING INDEX OF THE SECOND ARRAY
    for(int i=0; i<rightLength; i++){
        second[i] = arr[mainArrayindex++];
    }

    int indexFirst = 0;
    int indexSecond = 0;
    mainArrayindex = start;

    while(indexFirst < leftLength && indexSecond < rightLength){
        if(first[indexFirst] < second[indexSecond]){
            arr[mainArrayindex++] = first[indexFirst++];
        }else{
            arr[mainArrayindex++] = second[indexSecond++];
        }
    }

    while(indexFirst < leftLength){
        arr[mainArrayindex++] = first[indexFirst++];
    }
    while(indexSecond < rightLength){
        arr[mainArrayindex++] = second[indexSecond++];
    }

    delete[] first;
    delete[] second;
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
        cout<<arr[i]<<",";
    }
}
