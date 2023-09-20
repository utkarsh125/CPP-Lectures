#include <iostream>
#include <vector>
using namespace std;


int ternarySearch(int start, int end, int key, vector<int> arr[]){

    if(end>=start){
        int mid1 = start + (end-start)/3;
        int mid2 = end - (end-start)/3;

        if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }

        if (key < arr[mid1]) {
            return ternarySearch(start, mid1 - 1, key, arr);
        } else if (key > arr[mid2]) {
            return ternarySearch(mid2 + 1, end, key, arr);
        } else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }

    return -1;
}
int main(){

    int = arr{1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int end = 9;

    int key = 5;

    int find = ternarySearch(start,end,key,arr);

    cout << "INDEX OF " << key << " IS " << find << endl;


    return 0;
}