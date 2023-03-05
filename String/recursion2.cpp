#include<iostream>
using namespace std;
int PowerRaised(int n,int p)
{
if(p==0)
{
    return (1);
}
int k=PowerRaised(n,p-1);
return(n*k);
}
int main()
{
int n,p;
cin>>n>>p;
cout<<PowerRaised(n,p);
}