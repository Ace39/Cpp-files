#include<iostream>
using namespace std;
int Add_two_Binary(int a,int b)
{int k=0,prev_carry=0;
while(a!=0&&b!=0)//considering a & b of same bit size
{
int j=a%10;
int i=b%10;
//case 1
if(j==0&&i==0)
{
if(prev_carry==1)
{
    k=k*10+1;
    prev_carry=0;
}
else
k=k*10+0;
}
if(j==0&&i==1||j==1&&i==0)
{
if(prev_carry==1)
{
    k=k*10+0;
    prev_carry=1;
}
else
{
    k=k*10+1;
    prev_carry=0;
}
}
if(i==1&&j==1)
{
    if(prev_carry==1)
    {
        k=k*10+1;
        prev_carry=1;
    }
    else
    {
        k=k*10+0;
        prev_carry=1;
    }
}

a=a/10;
b=b/10;
}
if(prev_carry==1)
{
    k=k*10+1;
}
return(k);
}
int main()
{
int a,b;
cin>>a>>b;
cout<<Add_two_Binary(a,b);
}