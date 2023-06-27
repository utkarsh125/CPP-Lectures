#include <iostream>
using namespace std;
#include <vector>

int main(){

    //creating vector

    vector<int> arr;
    // cout<<"Initial Size of array: ";
    // cout<< arr.size()<<endl;

    // int ans= (sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;//compiler depended answer

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr.pop_back();//we pass no arguments in pop_back

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //EXPLICITLY GIVING SIZE IMPROVES IT
    // vector<int> brr(10);
    // vector<int> brr(10,-1);//we can initialize it differently

    // int n;//n is the size of array
    // cin>>n;
    // vector<int> brr(n, -101);
    // cout<<"Size of B: "<<brr.size()<<endl;
    // cout<<"Capacity of B: "<<brr.capacity()<<endl;

    //value in brr

    // for(int i=0; i<brr.size();i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    //DEFINITE USE CASE 
    vector<int> crr{10,20,30,50};

    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;


    return 0;

}