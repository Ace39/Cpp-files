#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
return(n|(1<<pos));
}
int Unique(int arr[],int n)
{
int a[64];
int result=0;
for(int i=0;i<64;i++)//since a total of 64 bits can be there in a number 
//its actually when a decimal number is converted to binary digit then maximum of 64 positions are filled up for eg:-1000100110110.....to 64 bits
{
    int sum=0;
    for(int j=0;j<n;j++)
    {
    if((arr[j]&(1<<i))!=0)//means at that position setbit is present 
    {
    sum++;
    }
    }
    a[i]=sum;
}
for(int i=0;i<64;i++)
{
    if(a[i]%3!=0)
    {
    result=setBit(result,i);
    }
}
return(result);
}
int main()
{
int arr[10]={1,3,2,3,4,2,1,1,3,2};
cout<<Unique(arr,10);
}