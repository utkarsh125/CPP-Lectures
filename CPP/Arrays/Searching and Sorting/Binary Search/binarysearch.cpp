#include <iostream>
#include <vector>
using namespace std;


int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }

        else if(target < element){
            //SEARCH IN LEFT
            end = mid-1;
        }
        else{
            //SEARCH IN RIGHT
            start = mid+1;
        }

        mid = (start+end)/2; 
    }

    //IF NOT FOUND
    return -1;
}
int main(){

    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;
    int target = 2;

    int indexOftarget = binarySearch(arr,size, target);

    if(indexOftarget == -1){
        cout<<"Target Not Found"<<endl;
    }

    else{
        cout<<"Target found at: "<<indexOftarget<<endl;
    }

    return 0;
}