#include <iostream>
#include <vector>
using namespace std;

int main(){

    //We have to Union these arrays
    int arr[] = {1,3,5,7,9};
    int sizeA = 5;
    int brr[] = {2,4,6,8};
    int sizeB = 4;

    vector<int> ans;

    //push all elements of vector arr
    for(int i=0;i<sizeA;i++){
        //we push the elements to the vector array
        ans.push_back(arr[i]);
    }

    for(int i=0;i<sizeB;i++){
        //similarly with brr[]
        ans.push_back(brr[i]);
    }

    //printing the array of union
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}