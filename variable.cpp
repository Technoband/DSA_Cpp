#include<iostream>
using namespace std;
int main()
{
 int a =9;
cout << a ;
    if (true)
    {
        int b ;      //each block can have the same variable 
        if (true)
        {
            int b ;
            if (1)
            {
                int b;
            }
        }

    }
return 0;
}