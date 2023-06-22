#include<iostream>
using namespace std;

int main(){

    // int arr[10]={1,2,3,4,5,6,7};
    // cout<<arr[4]<<endl;

    // //printing the value of the index
    // cout<<"where we haven't given a value will print a random value"<<endl;
    // cout<<arr[10]<<endl;

    // cout<<"Printing all elements using loop"<<endl;

    // for(int i=0;i<7;i++){
    //     cout<<arr[i]<<endl;
    // }

    //using loop to initialize array

    int arr[10];

    //taking input in array
    cout<<"Input values in array: "<<endl;
    for(int i=0; i<10;i++){
        //bad practice
        // int n;
        // cin>>n;
        // arr[i]=n;

        cin>>arr[i];
    }

    //printing array
    cout<<"Printing the values in array"<<endl;

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}