#include<iostream>
using namespace std;

void reachHome(int src, int destination){
    //base case

    cout<<"SRC: "<<src<<" Destination: "<<destination<<endl;
    if(src == destination){
        cout<<"REACHED HOME!";
        return;
    }

    src = src + 1;

    reachHome(src, destination);


}

int main(){

    int destination = 10;
    int src = 1;

    reachHome(src, destination);
}
