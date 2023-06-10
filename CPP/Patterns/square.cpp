// this program follows the same sequence as
// the rectangle question

#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}