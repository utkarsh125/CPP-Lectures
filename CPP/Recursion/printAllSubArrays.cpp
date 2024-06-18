#include <iostream>
#include <vector>
using namespace std;

void printSubArray_util(vector<int>& arr, int start, int end){

    //base case
    if(end==arr.size()){
        return;
    }
    //1 case solution
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Recursive call
    printSubArray_util(arr, start, end+1);
}

void printSubArray(vector<int> &arr){
    for(int start =0; start< arr.size(); start++){
        int end = start;
        printSubArray_util(arr, start, end);
    }
}
int main(){

    vector<int> arr = {1,2,3,4,5};
    printSubArray(arr);
    return 0;

}