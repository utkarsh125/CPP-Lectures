#include <iostream>
#include <limits.h>
//For INT_MIN and INT_MAX
using namespace std;


int main(){

    int arr[] = {1,3,5,12,4,7,8,2};
    int size = 8;
    //Initialise the maxi varible with
    //minimum possible inter value
    int maxi = INT_MIN;

    for(int i=0;i<size; i++){
        if(arr[i]>maxi){
            //found a number greater than maxi, update maxi

            maxi = arr[i];
        }
    }
    cout<<"Maximum number is: "<<maxi<<endl;
}


