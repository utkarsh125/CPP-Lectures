#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0) return 1;
    //1 case solve
    int res = n * factorial(n-1);
    return res;
}

int main(){

    int n = 5; //FIND FACTORIAL OF THIS
    //F(n) = n * f(n-1)
    int ans = factorial(n);
    cout<<ans<<endl;
}
