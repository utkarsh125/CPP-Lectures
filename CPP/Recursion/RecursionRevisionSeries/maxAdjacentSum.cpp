#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int> arr, int i, int n, int sum){

    //base case
    if(i>=n-1){
        return sum;
    }

    sum = max(sum, arr[i] + arr[i+1]);

    return maxSum(arr, i+1, n, sum);

}

int main(){

    vector<int> arr{2,1,4,9};
    int n = arr.size();
    int i = 0;
    int res = maxSum(arr, i, n, 0);
    cout<<res<<endl;
}
