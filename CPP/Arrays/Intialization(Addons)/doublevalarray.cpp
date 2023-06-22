#include <iostream>
using namespace std;

int main(){
    
    //max array size
    int arr[50];

    //required size for array
    cout<<"Enter the required size for the array(max 50): ";
    int n;
    cin>>n;
    //input in the array

    cout<<"Enter the elements according to the size you gave: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Doubled Array Values: ";
    //printing the array with doubles
    for(int i=0;i<n;i++){

        cout<<2*arr[i]<<" ";

    }
}