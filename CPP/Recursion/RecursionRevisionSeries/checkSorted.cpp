#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> arr, int n, int i){

    //base case -->if iterator reaches the end of the array
    if(i == n-1){
        return true;//--> Then the array is sorted
    }

    //1 case solve
    if(arr[i] > arr[i+1]){
        return false;
    }
    return checkSorted(arr, n, i+1);
}

int main(){
    vector<int> arr{1,2,3,4,5,6};
    vector<int> vec{1,2,4,3,5,0};

    int n = arr.size();
    int m = vec.size();
    int i = 0;
    bool ans = checkSorted(arr, n, i);
    bool res = checkSorted(vec, n, i);
    cout<<ans<<endl;
    cout<<res<<endl;
}
