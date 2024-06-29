#include <iostream>
#include <vector>
using namespace std;


int partition(int arr[], int s, int e){
    //step 1 -->select pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];
    
    //step 2 -->Find right position for pivot element and place the pivot there
    int count = 0;
    //pivot element 0 pr tha to loop s+1 se shuru krte ho
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    //jab mai loop se bahar aaya tb pivot ki right index pta hogi
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);//these are elements
    pivotIndex = rightIndex;//these are indices


    //step 3 --> left me chote and right me bade
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }

        while(arr[j] > pivotElement){
            j--;
        }

        //ab 2 case ho skte hai
        //CASE A: you found elements to swap
        //CASE B: No need to swap (Left saare chote, right saare bade)

        if(i < pivotIndex && j> pivotIndex){
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case --> QuickSort kb tk chalega
    //base case ---> s=e then single element and single element is always sorted
    if(s>=e){//invalid array
        return;
    }

    //Partition logic
    int p = partition(arr, s, e);

    //recursive
    //Left call
    quickSort(arr, s, p-1); //start se pivot element se pehle
    //Right call
    quickSort(arr, p+1, e); //pivot ke baad
    
    
}

int main(){

    int arr[] = {8,1,3,3,4,4,20,50,50,50,50,30};
    int n = 12;

    //starting index
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}