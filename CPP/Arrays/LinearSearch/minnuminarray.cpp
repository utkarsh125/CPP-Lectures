#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {1,3,-5,-20,47,0};
    int size = 6;

    int min_i = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<INT_MAX){
            //Found a lesser number than min_i then update min_i
            min_i = arr[i];
        }
    }
    cout<<"The Minimum Number in the array: "<<min_i<<endl;
}