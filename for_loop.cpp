#include<iostream>
using namespace std;
int main()
{
  int n ;
  cout << "Enter the value of n : " << endl;
  cin>> n;

  cout << "printing the values" << endl;


//   for (int i = 1; i <= n; i++)
//   {
//     cout << i << endl;
//   }
  
int i = 1;
//   for (; i <= n; i++)
//   {
//     cout << i << endl;
//   }
  

//     for (; i <= n; )
//   {
//     cout << i << endl;
//   }
  

//    for (; ; )
//   {
//     if (i <=n)
//     {
//         cout << i << endl;
//     }
//     else {
//         break;
//     }
//     i++;
//   }

  for (int  a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b-- , c--)
  {
   cout << a << " "<< b << " "<< c ;
  }
  
  
return 0;
}