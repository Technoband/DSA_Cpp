#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    // n = 4;
    int i = 1;
    while (i <=n)
    {
        int j = 1;
        while (j <= n)
        {
          cout << "*";
          j++;
        }
        std::cout << std::endl;
        i++;
        
    }
    
return 0;
}