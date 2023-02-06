#include<iostream>

using namespace std;

int main(){
    int row;
    int colm;

    cout << "please enter the row :" ;
    cin >> row ;
        cout << "please enter the colm :" ;
          cin >> colm ;


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<colm; j++)
        {
            cout << "* ";
        }

        cout << endl ;
    }

}