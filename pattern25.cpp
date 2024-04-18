// dabang pattern 
// homeowrk pattern video last 
#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;

int row=1;
int s=n;
while(row<=n)
{
    // First Triangle
    int col=n;
    while (col>=row)
    {
        cout<<n-col+1;
        col--;
    }

    // Second Triangle
    // if(i>1);
    // for(int p=1;p<=2*(i-1);p++)
    // {
    //     cout<<"*";
    // }
    
    int p=1;
    while(p<=2*(row-1))
    {
        cout<<"*";
        p++;
    }
    
    // Third Triangle
    col=s;
    while(col>=1)
    {
        cout<<col;
        col--;
    }
    cout<<endl;
    s--;
    row++;
}
}