#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element you want to search: ";
    int key;
    cin>>key;

    for(int i = 0; i<6; i++){
        if(arr[i]==key){
            cout<<i;
        }
        
        
    }

    cout<<"not found";
}