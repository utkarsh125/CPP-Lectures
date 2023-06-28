#include <iostream>
#include <vector>
using namespace std;

//FIND A PAIR THAT UPON ADDITION GIVES
//VALUE=SUM

int main(){

    vector<int> arr{10,20,40,60,70};
    //print all pairs
    //out loop will traverse for each element

    int sum=80;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];

        for(int j=i+1;j<arr.size();j++){
            //cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            if(element+arr[j]==sum){
                cout<<"Pair found "<<element<<","<<arr[j]<<endl;
            }
        }
    }

}