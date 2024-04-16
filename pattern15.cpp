#include<iostream>
using namespace std;
int main()
{
 int n;
 cin >> n ;
 int row = 1;
    char ch = 'A';

 while (row <= n)
 {
    int col = 1;

     while (col <= row)
     {
        cout << ch << " ";
        ch +=1;
        col++;
     }
     cout<< endl;
     row++;
     
 }
     
return 0;
}