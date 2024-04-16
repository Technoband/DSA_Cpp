#include<iostream>
using namespace std;
int main()
{   
    int n, i, j;
    i=1;

    cin >> n;
    while(i <= n)
    {
        j = 1;
        while (j <= n )
        {
          cout << j;
          j++;  
        }
        cout<< endl;
        i++;
    }  
return 0;
}