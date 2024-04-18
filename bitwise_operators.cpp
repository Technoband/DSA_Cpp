#include<iostream>
using namespace std;
int main()
{
   int a = 4;
   int b = 6;
   
   cout << "a&b " << (a&b)<< endl; //and
   cout << "a|b " << (a|b)<< endl;//or
   cout << "~a " << (~a)<< endl; //not
   cout << "a^b " << (a^b)<< endl; //XOR

    cout << (17  >> 1)<< endl; //right shift
    cout << (17  >> 2)<< endl;
    cout << (19  << 1)<< endl; //left shift
    cout << (21  << 2)<< endl;

    int i =7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (--i )<< endl;
    cout << (i--) << endl;
return 0;
}