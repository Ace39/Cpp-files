#include<iostream>
using namespace std;
int Factorial(int n)
{
if(n==1)
{
return 1;
}
int k=Factorial(n-1);
return(n*k);
}
int main()
{
int n;
cin>>n;
cout<<Factorial(n);
}