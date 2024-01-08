#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    //INSERTION SORT

    for(int round=1; round<n; round++){//ROUND = 1 because we cannnot compare with 0th index
        //STEP 1: FETCH
        int val = arr[round];
        int j = round-1;
        //STEP 2: COMPARE
        for(; j>=0; j--){
            if(arr[j] > val){
                //STEP 3: SHIFT
                arr[j+1] = arr[j];
            }
            else{
                //RUKNA HAI IDHAR
                break;
            }
        }

        //STEP 4: COPY
        arr[j+1] = val;


    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
