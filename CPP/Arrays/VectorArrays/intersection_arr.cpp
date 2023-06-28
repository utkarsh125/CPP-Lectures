#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,9,10};

    vector<int> ans;

    //out loop on arr vector

    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        //for every element, run loop on brr

        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                //mark the found element as something that won't be search again
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }
    
    //print ans array
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}