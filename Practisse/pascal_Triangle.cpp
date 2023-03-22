#include<iostream>
using namespace std;
int Fibonacci(int n)
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
int n;cin>>n;
for(int i=0;i<=n;i++)
{
for(int j=0;j<=i;j++)
{
   int k1= Fibonacci(i);
   int k2=Fibonacci(i-j);
   int k3=Fibonacci(j);
   cout<<k1/(k2*k3)<<" ";
}
cout<<endl;
}
}