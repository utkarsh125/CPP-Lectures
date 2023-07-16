#include <iostream>
using namespace std;

void findMissing(int *a, int n){

    int i=0;
    while(i<n){
        int index = a[i] - 1;//original index
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }
        else{
            ++i;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    int a[] = {1,3,5,3,4};
    n = sizeof(a)/sizeof(int);

    findMissing(a,n);
    return 0;
}
