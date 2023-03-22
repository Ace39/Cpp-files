// 0,1,1,2,3,5,8,13,21,34,55
#include<iostream>
using namespace std;
void Print_nth_Fibonacci(int n)
{
if(n==1)
cout<<0;
if(n==2)
{
    cout<<1;
}
if(n>2)
{int k1=0,k2=1,sum;
for(int i=3;i<=n;i++)
{
 sum=k1+k2;
k1=k2;
k2=sum;
}
cout<<sum;
}
}
int main()
{
    int n;
    cin>>n;
    Print_nth_Fibonacci(n);
}