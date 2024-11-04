#include <climits>
#include<iostream>
#include<vector>
using namespace std;

int solve(int n, int x, int y, int z){

    //base case
    if(n==0){//when length is 0
        return 0;
    }
    if(n<0){//invalid length
        return INT_MIN;
    }

    //x rod
    int xRod = solve(n-x,x,y,z)+1; //x subtracted from the rod
    int yRod = solve(n-y,x,y,z)+1;//y subtracted from the rod
    int zRod = solve(n-z,x,y,z)+1;//z subtracted from the rod

    int res = max(xRod, max(yRod, zRod));
    return res;
}

int main(){

    int n = 8;
    int x = 5;
    int y = 2;
    int z = 2;

    int res = solve(n, x, y, z);

    if(res == INT_MIN){
        res = 0;
    }
    cout<<res<<endl;
}
