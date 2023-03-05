#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
    xorsum=xorsum^arr[i];
    }//xorsum=4^7 because every duplicate num xors would get cancel out
    
    
}
int main()
{
int arr[]={1,2,3,4,7,1,2,3};//two unique nos 4,7 are present
int k;
 k=unique(arr,8);
int pos=0;
int setbit=0;
while(setbit!=1)
{
    if((k&(1<<pos))!=0)
    {
setbit++;
    }
    else
    pos++;
}//from this we got our rightmost bit in the xorsum
int s=0,s1=0;
for(int i=0;i<8;i++)
{
    
    if((arr[i]&(1<<pos)!=0))
    {
    s=s^arr[i];
    }
    else
    {
    s1=s1^arr[i];
    }
}
cout<<s<<" "<<s1;
//instead of using s1
cout<<s<<" "<<(k^s);
//as k=4^7 and xor of it 4^(7^7) will give 4 as 7^7 =0 ans 4^0= 4



}