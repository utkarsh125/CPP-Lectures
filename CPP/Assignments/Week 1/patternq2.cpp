//HOLLOW SQUARE PROBLEM


#include <iostream>
using namespace std;

int main(){

    int n;//input for number of rows
    cout<<"Enter the number of rows: ";
    cin>>n;
    //outerloop first and last rows 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}