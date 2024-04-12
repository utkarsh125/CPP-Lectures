#include <iostream>
using namespace std;

// int climbStairs(int n){
//     //base case - rukna hai
//     if(n==0 || n==1) return 1;

//     int ans = climbStairs(n-1) + climbStairs(n-2);
//     return ans;
// }

// int main(){

//     int n;              
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     int ans = climbStairs(n);
//     cout<<"Answer: "<<ans;
// }


void print(int arr[], int n, int index){
    //base case
    if( index >= n){
        return;
    }

    //SOLVED 1 case
    cout<< arr[index]<<" ";

    //processing other cases (index = 0 solved, solve i+1 and recurse back)
    print(arr, n, index+1);
    


}

//APPROACH 2
// void print(int arr[], int n){
//     if(n==0) return;

//     cout<<arr[0]<<" ";
//     print(arr+1, n-1);

// }

int main(){

    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int index= 0;
    print(arr, n, index);
    // print(arr,n);

    return 0;

}