//COIN CHANGE PROBLEM
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int coinChange(vector<int> arr, int target){
    //base case [target = 0] 
    if(target==0){
        return 0;
    }
    //base case 2 [target < 0]
    if(target<0){
        return INT_MAX;
    }

    //Solve 1 case
    int mini = INT_MAX;
    for(int i = 0; i<arr.size(); i++){
        int ans = coinChange(arr, target - arr[i]);
        if(ans!=INT_MAX)
        mini = min(mini,ans+1);
    }
    return mini;

}

int main(){
    vector<int> arr{1,2};
    int target = 5;
    int ans = coinChange(arr, target);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}