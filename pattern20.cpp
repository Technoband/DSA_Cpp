#include<iostream>
using namespace std;
int main()
{
 int n;
 cin >> n ;
 int row = 1;
 while (row <= n)
 {
    int col = 1;
    int start = n - row + 1;
    while (col <= start)
    {
        cout << "*" ;
        col+=1;
    }
    cout << endl;
    row+= 1;
    
 }
 
return 0;
}