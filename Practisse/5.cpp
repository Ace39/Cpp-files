#include<iostream>
using namespace std;
int main()
{
    int n,c=1,k=0;
    cin>>n;
    while(n!=0)
    {
    
    k=k+c*(n%10);
    c=c*8;
    n=n/10;
    }
    cout<<k;
}