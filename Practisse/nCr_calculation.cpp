#include<iostream>
using namespace std;
int Factorial(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
return(fact);
}
int main()
{
int n,r;
cin>>n>>r;
int k1=Factorial(n);
int k2=Factorial(n-r);
int k3=Factorial(r);
cout<<k1/(k2*k3);
}