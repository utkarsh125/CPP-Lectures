#include <iostream>
#include <vector>
using namespace std;


//CODE
int firstOccurrence(vector<int> arr, int target){

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

//driver CODE
int main(){

    vector<int> arr{1,3,3,3,3,3,4,4,4,4,6,7}; //Already sorted for BinearySearch
    cout<<"The Array is: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    int target = 4;
    int indexOfFirstOcc = firstOccurrence(arr, target);
    cout<<endl;
    cout<<"The First Occurrence is at: "<<indexOfFirstOcc<<endl; 
}