#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr{5,4,3,2,1};
    int n = arr.size();
    //SELECTION SORT

    for(int i=0;i<n-1;i++){

        int minIndex=i;

        for(int j=i+1; j<n; j++){
            //IMPORTANT CONDITION
            if(arr[j]<arr[minIndex]){
                //newMin, then store
                minIndex = j;
            }

        }
        //AGAR MIL GYA TOH
    //SWAP KRDO
    swap(arr[i], arr[minIndex]);
    }

    //PRINTING
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}