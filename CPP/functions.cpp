#include <iostream>
using namespace std;

void func(){
    cout<<"Inside func().\n";
}

int main(){
    cout<<"Starting main().\n";
    func();
    func();
    cout<<"Ending main().\n";
}