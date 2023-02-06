#include<iostream>
using namespace std;

int main(){
    int value;
    cout << " put the value :";
    cin >> value;
/*
    for( int i=0; i<value; i++)
    {
        for( int j=0; j<i+1; j++)
        {
            cout << j + 1 << " " ;
        }
          cout << endl;
    }

    */

    

    // reverse pyramid  with number

     for( int i=value; i>0; i--)
    {
        for( int j=0; j<=i-1; j++)
        {
           cout << j + 1 << " " ;
        }
          cout << endl;
    }
  
}