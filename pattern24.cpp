#include<iostream>
using namespace std;
int main()
{
 int n ;
 cin>> n;
 int row = 1;
 while (row <= n)
 {
    // print first triangle 
    int space = n - row ;
    while (space )
    {
        cout <<" ";
        space-=1;
    }
    // print second triangle 
    int col = 1;
    while (col <= row)
    {
        cout << col;
        col +=1;
    }
    
    // print third triangle 
    int start = row - 1;
    while (start)
    {
        cout << start ;
        start -=1;
    }
    cout << endl;
    row += 1;
 }
 
return 0;
}