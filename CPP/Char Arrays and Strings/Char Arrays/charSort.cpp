//SORTING CHAR ARRAY


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool cmp(char first, char second){
    return first>second;//DESCENDING ORDER
}

bool compare(int a, int b){
    // return a<b; //ASCENDING ORDER
    return a>b;
}

int main(){

    //USING INBUILT FUNCTIONS

    string s = "utkarsh";
    // sort(s.begin(), s.end());

    sort(s.begin(), s.end(), cmp);

    vector<int> v{5,3,1,2,4};
    sort(v.begin(), v.end(), compare);

    for(auto i:v){
        cout<< i << " ";
    }
    cout<<s<<endl;
    return 0;


}