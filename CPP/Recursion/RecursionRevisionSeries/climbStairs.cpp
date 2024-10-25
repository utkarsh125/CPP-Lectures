//The leetcode soluton was not working on their compiler
//so I'm trashing my laptop for it.

#include<iostream>
using namespace std;

int climbStairs(int n){
    if(n==0 || n==1){
        return 1;
    }
    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans;
}

int main(){


    int numberOfSteps = 10;
    int res = climbStairs(numberOfSteps);
    cout<<res;

}
