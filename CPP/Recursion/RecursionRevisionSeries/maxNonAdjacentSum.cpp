//MAX NON-ADJACENT SUM

#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int maxNDSum(vector<int> arr, int i, int sum, int &maxi){

    //base case
    if(i>=arr.size()){
        maxi = max(sum, maxi);
        return maxi;
    }

    //include

    maxNDSum(arr, i+2, sum+arr[i], maxi);

    //exclude

    maxNDSum(arr, i+1, sum, maxi);
    return maxi;
}

int main(){

    vector<int> arr{2,1,4,9};
    int i = 0;
    int maxi = INT_MIN;
    int sum = 0;

    int res = maxNDSum(arr, i, sum, maxi);

    cout<<res;
}
