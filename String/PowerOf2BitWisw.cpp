#include<iostream>
using namespace std;
int IsPowOf2(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        if((n&n-1)==0)
        {
            return 1;
        }
        else 
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    if(IsPowOf2(n)==1)
    {
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
}