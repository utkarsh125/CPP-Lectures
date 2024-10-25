#include<iostream>
using namespace std;

int powTwo(int n){
    //base case
    if(n==0) return 1;

   //1 case
   int ans = 2 * powTwo(n-1);
   return ans;

}

int main(){

    int n = 5;
    int ans = powTwo(n);
    cout<<ans<<endl;
}
