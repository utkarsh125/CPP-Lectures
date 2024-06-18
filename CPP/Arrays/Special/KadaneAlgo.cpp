#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int sum = 0;
    int maxi = nums[0];

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "The array is: ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    int result = maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
