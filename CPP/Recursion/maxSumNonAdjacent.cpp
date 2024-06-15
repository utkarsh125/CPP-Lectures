#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxNonAdjSum(vector<int> arr, int i, int sum, int &maxi){
    //base case -- array se bahar nikal jao
    if(i>=arr.size()){
        //maxi update
        maxi = max(sum, maxi);
        return maxi;
    }

    //include 

    maxNonAdjSum(arr, i+2, sum+arr[i], maxi);

    //exclude

    maxNonAdjSum(arr, i+1, sum, maxi);
}
int main(){
    
    vector<int> arr{2,7,9,3,1};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    int ans = maxNonAdjSum(arr, i, sum, maxi);

    cout<<maxi<<endl;
    return 0;
}