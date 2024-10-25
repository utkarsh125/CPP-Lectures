#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void minElement(vector<int> arr, int i, int size, int &mini){
    //base case
    if(i>=size){
        return;
    }

    //one case solve
    if(arr[i] < mini){
        mini = arr[i];
    }

    minElement(arr, i+1, size, mini);

}

int main(){

    vector<int> arr{5,9,2,7,21,20};
    int i = 0;
    int size = arr.size();
    int mini = INT_MAX;

    minElement(arr, i, size, mini);

    int res = mini;
    cout<<res;
}
