#inc5lude <iostream>
using namespace std;

int main(){
    cout<<"Enter number of Rows: ";
    int n;
    cin>> n;

    for(int row=0;row<n;row++){
        for(int col=0; col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}