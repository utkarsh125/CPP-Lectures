//LINEAR SEARCH IN THE 2D ARRAY

#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){

    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){

            if(arr[i][j]==key){
                return true;
            }
        }
    }
    //value is not present
    return false;
}

int main(){

    int arr[3][3];
    int rows=3;
    int cols=3;

    cout<<"INPUT IN THE ARRAY ROW WISE: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"THE ARRAY IS: "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the Element to check: "<<endl;
    int key;
    cin>>key;

    cout<<"FUNCTION CHECKING..."<<endl;

    if(findKey(arr,rows,cols,key)){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
}