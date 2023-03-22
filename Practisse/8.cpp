#include<iostream>
#include<math.h>
using namespace std;
int Decimal_to_Binary(int n )
{
    int k=n;
    int c=-1;
    while(k!=0)
    {
    c++;//c will be highest power of 8 contained in a no.
    k=k/8;
    }
    int j=0;
while(n!=0&&c>=0)
{
 j=j*10+n/pow(8,c);//quoitent
 n=n%int((pow(8,c)));
 c--;
}
return(j);
}
int main()
{
int n;
cin>>n;
cout<<Decimal_to_Binary(n);
}