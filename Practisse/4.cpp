#include<bits/stdc++.h>
using namespace std;
void Binary_to_decimal(int n)
{
    int k=0,c=1;
    while(n!=0)
    {
        
    k=k+(n%10)*c;
    c=c*2;
    n=n/10;
    }
    cout<<"The decimal no. is "<<k;
}
int main()
{
int n;
cin>>n;
Binary_to_decimal(n);
}