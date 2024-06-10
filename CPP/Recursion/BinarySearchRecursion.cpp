#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr, int start, int end, int key){
    //base case
    if(start > end){
        return -1;
    }
    //ek ke liye solve krna hai
    int mid = start + ((end-start)/2);
    if(arr[mid] == key){
        return mid;
    }

    //baaki recursion smbhal lega
    // if(arr[mid] < key){
    //     return binarySearch(arr, mid +1, end, key);
    // }

    // else{
    //     //left me search
    //     return binarySearch(arr, start, mid-1, key);
    // }

    //or you can use ternary operator
    return (arr[mid] < key) ? binarySearch(arr,mid+1, end, key) : binarySearch(arr, start, mid-1, key);
}

int main(){
    vector<int> v{10,20,30,50,60,90,99};

    int target = 99;

    int n = v.size();
    int start = 0;
    int end = n -1;
    int ans = binarySearch(v, start, end, target);

    cout<<"The Answer is: "<<ans<<endl;
}