#include <iostream>
using namespace std;


//PARTITIONING
int partition(int arr[], int start, int end){

    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++){
        count++;
    }

    //Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //sorting left and right parts of the pivot elements
    int i = start;
    int j = end;

    while (i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int start, int end){
    //base case

    if (start>=end){
        return;
    }

    //partitioning the array
    int p = partition(arr, start, end);
    
    //sorting the left part
    quickSort(arr, start, p-1);

    //sorting the right part
    quickSort(arr,p+1, end);

}

int main(){

    int arr[] = {20,35,82,42,36};
    int n = 5;

    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    

}