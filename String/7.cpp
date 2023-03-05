/*
Clear bit 
means given position se bit clear krke 0 krdena
*/
#include<iostream>
using namespace std;
int ClearBit(int n,int i)
{
return((n&(~(1<<i))));
}
int main()
{
int n,i;
cin>>n>>i;
cout<<ClearBit(n,i);
}