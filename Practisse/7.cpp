#include<iostream>
using namespace std;
int Decimal_to_Binary(int n)
{
    int k=0,c=1;
while(n!=0)
{ 
k=k+(n%2)*c;
c=c*10;
n=n/2;
}
return(k);
}
int main()
{
int n;
cin>>n;
cout<<Decimal_to_Binary(n);
}