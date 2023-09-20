#include <iostream>
#include <vector>
using namespace std;

int pwr(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return (a*pwr(a, b-1));
    }
}

int main(){
    int x,y;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    int ans = pwr(x,y);
    cout<<"Answer is: "<<ans<<endl;
}