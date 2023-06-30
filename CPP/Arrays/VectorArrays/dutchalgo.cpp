#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    int start = 0;
    int end = arr.size()-1;

    int i = 0;

    while(i!=end){

        if(arr[i]==0){
            //swap from left
            swap(arr[start],arr[i]);
            i++;
            start++;
        }

        else{
            swap(arr[end], arr[i]);
            end--;
        }
    }

    //print
    for(auto value: arr){
        cout<<value<<" ";
    }
}