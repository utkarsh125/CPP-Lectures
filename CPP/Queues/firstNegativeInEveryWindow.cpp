#include<iostream>
#include<deque>
using namespace std;


void solve(int arr[], int n, int k){
    deque<int> q;

    //assumption: k<n
    if(k>=n){
        cout<<"Enter valid window size"<<endl;
    }

    //Process first window of size k
    for(int i = 0; i<k; i++){
        if(arr[i] < 0){
            q.push_back(i); //index store
        }
    }

    //remaining windows process
    for(int i = k; i<n; i++){
        //Answer of old window
        if(q.empty()){
            cout<< 0 << " ";
        }else{
            cout<<arr[q.front()]<<" ";
        }

        //Out of window elements must be removed
        while((!q.empty()) && (i-q.front() >= k)){
            q.pop_front();
        }

        //check front element for insertion
        if(arr[i] < 0){
            q.push_back(i);
        }
    }
    if(q.empty()){
        cout<< 0 << " ";
    }else{
        cout<<arr[q.front()]<<" ";
    }
}

int main(){

    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;

    solve(arr, size, k);

    return 0;
}
