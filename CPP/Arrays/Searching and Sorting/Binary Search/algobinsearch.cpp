#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v{1,2,3,4,5,6,7};

    if(binary_search (v.begin(), v.end(), 4)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}
