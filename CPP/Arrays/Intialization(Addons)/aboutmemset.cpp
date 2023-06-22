#include<iostream>
//memset comes under <cstring>
#include<cstring>

using namespace std;

int main(){

    bool arr[5];
    memset(arr,true, sizeof(arr));

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}