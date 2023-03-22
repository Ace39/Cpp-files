#include<iostream>
#include<math.h>
using namespace std;
int Decimal_to_Hexadecimal(int n)
{
int k=n;
int c=-1;
while(k!=0)
{
    c++;
    k=k/16;//gets the highest power of 16
}
int j=0;
while(n!=0&&c>=0)
{
j=j*10+n/int(pow(16,c));
n=n%int(pow(16,c));
c--;
}
return(j);
}
int main()
{
int n;
cin>>n;
cout<<Decimal_to_Hexadecimal(n);
}