//leetcode 217

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

//BRUTE FORCE T.C. O(n^2)
// bool hasDuplicates(vector<int> arr){
//     bool flag = false;

//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i] == arr[j]){
//                 flag = true;
//             }
//         }
//     }
//     return flag;
// }


bool hasDuplicates(vector<int> arr){
    sort(arr.begin(), arr.end());

    bool flag = false;
    for(int i =0; i<arr.size(); i++){
        if(arr[i]==arr[i+1]){
            flag = true;
        }
    }

    return flag;
}

int main(){

    vector<int> arr = {2,1,3,4,4};

    bool check = hasDuplicates(arr);

    if(check==true){
        cout<<"Duplicates Found";
    }else{
        cout<<"No duplicates found";
    }
}