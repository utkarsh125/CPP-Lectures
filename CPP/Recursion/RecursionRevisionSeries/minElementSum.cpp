#include <limits.h>
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr, int target){

    //2 base cases
    if(target == 0){
        return 0;
    }

    if(target<0){
        return INT_MAX;
    }

    //1 case solve
    int mini = INT_MAX;
    for(int i = 0; i<arr.size(); i++){
        int ans = solve(arr, target-arr[i]);
        if(ans!=INT_MAX)
        mini = min(mini, ans+1);
    }

    return mini;
}

int main(){
    vector<int> arr{1,2};
    int target = 5;
    int ans = solve(arr, target);
    cout<<ans;
    return 0;
}
