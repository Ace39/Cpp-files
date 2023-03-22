#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
{
    if(sum>=0)
    {
    sum=sum+arr[i];
    if(sum>=0)
    {
        arr[i]=sum;
    }
    else{
        sum=0;
        arr[i]=0;
    }
    }
}
int MAX_NO=INT_MIN;
for(int i=0;i<n;i++)
{
    MAX_NO=max(MAX_NO,arr[i]);
}
cout<<MAX_NO;
}