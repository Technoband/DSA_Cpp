#include<iostream>
using namespace std;
int main()
{
int i, sum, n;
i = 0;
sum = 0;
cout << "Enter a number\n" ;
cin >> n;
while (i <= n )
{
    sum += i;
    i++;
}
 cout << "The sum is : " << sum <<endl;

 
return 0;
}