#include <iostream>
#include <vector>
using namespace std;

void printSolution(vector<vector<int>> &board, int n){
    for(int i =0; i<n;i++){
        for(int j = 0; j<n;j++){
            cout<<board[i][j] << " ";
        }

        cout<<endl;
    }

    cout<<endl;
}


bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    //check if we can put a queen on the current cell
    int i = row;
    int j = col;

    //check row
    while(j>=0){
        if(board[i][j] == 1){
            return false;
        }
        j--;
    }

    //check upper left diagonal
    i = row;
    j = col;

    while(i>=0 && j>=0){
        if(board[i][j] == 1){
            return false;
        }

        i--;
        j--;
    }

    //bottom left diagonal
    i = row;
    j = col;

    while(i<n && j>=0){
        if(board[i][j] == 1){
            return false;
        }

        i++;
        j--;
    }

    //Kahi pr bhi queen nhi mili
    //iska matlab postion safe hai
    //return true;

    return true;
}

void solve(vector<vector<int>> &board, int col, int n){
    //base case
    if(col>=n){
        printSolution(board, n);
        return;
    }

    //solve 1 case and rest recursion will handle
    //place queen in each row

    for(int row = 0; row < n; row++){
        if(isSafe(row, col, board, n)){
            //rkh do agar safe hai toh
            board[row][col] = 1; //---> Queen placed so mark it with 1

            //recursive solution 
            solve(board, col+1, n);

            //backtracking
            //Remove queen in case of backtracking
            board[row][col] = 0; //EMPTY CELL
        }
    }
     
}

int main(){
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n,0)); //nxn board with all 0s
    int col = 0;
    //0 ---> EMPTY CELL
    //1 ---> TAKEN 
    solve(board, col, n);
}