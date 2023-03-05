#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0,c=0;
    while(n>1)
    {
        if(n%2==0)
        {
        c++;
        }
        else
        {
            k=1;
            break;
        }
        n=n/2;
    }
    if(k==0)
    {
        cout<<"the given no. is a power of 2 with power "<<c;
        }
    else
    {
        cout<<"the given no. is not a power of 2";
    }
}