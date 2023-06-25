#include <iostream>
using namespace std;


bool find(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[5] = {1,3,5,7,8};
    int size = 5;

    cout<<"Enter the key to find: ";
    int key;
    cin>>key;

    if(find(arr,size,key)) {
        cout<<"Found at "<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
}