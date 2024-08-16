#include <iostream>
#include <stack>
using namespace std;

int main(){
    //declaration
    stack<int> st;

    //insert
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove
    // st.pop();

    cout<<"SIZE: "<<st.size()<<endl;
    cout<<"TOP: "<<st.top()<<endl;

    if(st.empty()){
        cout<<"EMPTY"<<endl;
    }else{
        cout<<"NON_EMPTY"<<endl;
    }

    //PRINTING
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
