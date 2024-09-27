#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int> &arr, int k){
    int n = arr.size();
    k = k&n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7};
    cout<<"Bofore Roation: ";
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 3;
    rotate(arr, k);
    cout<<"After rotation:";
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}
