#include<climits>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int MAX_NO=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int A[2*n];
    for(int i=0;i<(2*n-1);i++)
    {
        A[i]=arr[i];
        if(i>=n)
        {
            A[i]=arr[i-n];
        }
    }
    int sum=0;
    for(int i=0;i<(2*n-1);i++)
    {
    sum=sum+A[i];
    if(sum>=0)
    {
        A[i]=sum;
    }
    else
    {
        sum=0;
        A[i]=0;
    }
    }
    for(int i=0;i<(2*n-1);i++)
    {
     MAX_NO=max(MAX_NO,A[i]);
    }
    cout<<MAX_NO;
}