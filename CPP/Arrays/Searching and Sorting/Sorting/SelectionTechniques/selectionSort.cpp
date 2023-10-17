#include <iostream>
#include <vector>
using namespace std;

int main(){

    //SELECTION SORT
    vector<int> arr{5,2,6,3,7};
    int n = arr.size();

    //OUTERLOOP ---> (n-1) Rounds
    for(int i=0; i<n-1; i++){
        
        //initialize a minIndex i

        int minIndex = i;
        
        //INNERLOOP ---> Index of Minimum Element in range i->n
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                //new Minimum, then store
                minIndex = j;
            }
        }

        //SWAP
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}