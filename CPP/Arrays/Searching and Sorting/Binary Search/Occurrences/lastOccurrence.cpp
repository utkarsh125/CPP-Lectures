#include <iostream>
#include <vector>
using namespace std;

//CODE
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

int main(){

    vector <int> arr{1,2,2,3,3,3,4,4,4,5,6};
    cout<<"The array is: ";
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target = 4;
    cout<<"The target is: "<<target<<endl;

    int lastOccurrence = lastOcc(arr,target);
    cout<<"The Index of Last Occurrence of the given target is: "<<lastOccurrence<<endl;
    return 0;
}