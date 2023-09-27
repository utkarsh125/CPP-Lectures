//this code illustrates the total number of occurrences
//of an element in the given array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//CODE ---> totalOcc = lastOcc - firstOcc + 1
int firstOcc(vector<int> arr, int target){

    int start = 0;
    int end = arr.size()-1;
    int mid = start + ((end-start)/2);
    int ans = -1;


    while(start<=end){
        if(arr[mid]==target){
            ans = mid;

            end = mid - 1;
        }

        else if(target<arr[mid]){
            //search left side
            end = mid - 1;
        }
        else if(target>arr[mid]){
            //search right side
            start = mid + 1;
        } 
        mid = start + ((end-start)/2);
    }

    return ans;
}

int lastOcc(vector<int> arr, int target){

    int start = 0;
    int end = arr.size()-1;
    int mid = start + ((end-start)/2);
    int ans = -1; //if not in the array then return this

    while(start<=end){

        if(target==arr[mid]){
            ans = mid;

            //look in right for the last occurrence if present
            start = mid + 1;
        }

        else if(target<arr[mid]){
            end = mid - 1;
        }
        else if(target>arr[mid]){
            //search in right anyway if not at mid
            start = mid + 1;
        }

        mid = start + ((end-start)/2);
    }
    return ans;
}

int totalOcc(vector<int> arr, int target){

    int last = lastOcc(arr, target);
    int first = firstOcc(arr, target);
    int total = last - first + 1;
    return total;
}

int main(){

    vector<int> arr{1,2,2,3,3,3,4,4,4,4,4,5,5,6};
    int target = 4;

    int answer = totalOcc(arr, target);
    cout<<"Total Number of Occurrence of the given element is: "<<answer<<endl;
}