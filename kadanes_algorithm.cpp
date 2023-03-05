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
    int current_sum[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
    sum+=a[i];
    if(sum<0)
    {
    sum=0;
    }
    current_sum[i]=sum;
    }
int max_sum=INT_MIN;
for(int i=0;i<n;i++)
{
    max_sum=max(max_sum,current_sum[i]);

}
cout<<max_sum;
}