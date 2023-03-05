#include<iostream>
using namespace std;
int gcd(int a,int b)
{
while((a%b)!=0)
{
    int t=a%b;
    a=b;
    b=t;
}
return(b);
}
int main()
{
int a,b;
cin>>a>>b;
if(a>=b)
{
    cout<<gcd(a,b);
}
else
cout<<gcd(b,a);


}