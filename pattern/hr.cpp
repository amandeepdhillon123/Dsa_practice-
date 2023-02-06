
#include <iostream>
using namespace std;
int main()
{

    int row;
    cout << "please put the value of row";
    cin >> row;


    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row-1)
        {
            for (int j = 0; j < row; j++)
            {
                cout << "* ";
            }
           
        }
        else
        {
            cout << "* ";
            for (int m = 0; m < row-2; m++)
            {
                cout << "  ";
            }
            cout << "* ";

            //   cout << "ram ";
        }
        cout << endl;
    }
}