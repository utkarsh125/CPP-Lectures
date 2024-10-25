#include <climits>
#include <iostream>
#include <vector>
using namespace std;

void maxElement(vector<int> arr, int i, int size, int &maxi){
    //base case --> ARRAY KHTM TB WAPIS AJAO
    if(i>=size){
        return;
    }

    //current element check
    //1 case solve kro
    if(arr[i] > maxi){
        maxi = arr[i];
    }

    maxElement(arr, i+1,size, maxi);
}

int main(){
    vector<int> arr{10, 30, 21, 44, 132, 17, 19, 66};
    int size = arr.size();
    cout << "Array before: ";
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

    int maxi = INT_MIN;
    int i = 0;
    maxElement(arr, i, size, maxi);
    // Max element
    int res = maxi;
    cout << "Max element: " << res << endl;
}
