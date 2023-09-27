//this code contains practical use of the inbuilt function
// which is used to find the first and last occurrence of an element
// in the array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> arr{1,2,2,3,3,3,3,4,4,4,4};
    int target = 3;
    
    //firstOcc
    auto lowerBound = lower_bound(arr.begin(), arr.end(), target);
    cout<<lowerBound-arr.begin()<<endl;   

    //lastOcc
    auto upperBound = upper_bound(arr.begin(), arr.end(), target);
    cout<<upperBound-arr.begin()<<endl;
}