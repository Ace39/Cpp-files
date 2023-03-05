#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cum_arr[n+1];
    int sum=0;
    for(int i=0;i<n;i++)
    {
    sum+=a[i];
    cum_arr[i+1]=sum;
    }
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n+1;j++)
        {
        int sum=cum_arr[j]-cum_arr[i];
        max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum;


}