#include<iostream>
#include<climits>
using namespace std;
int kadanes_algo(int arr[],int n)
{
    int cum_arr[n];
    int sum=0;
int k,l;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        cum_arr[i]=sum;
    }
int max_sum=INT_MIN;
for(int i=0;i<n;i++)
{
max_sum=max(max_sum,cum_arr[i]);
}
for(int i=0;i<n;i++)
{
    if(max_sum==cum_arr[i])
    {
        k=i;//k represents the ending point of the subarray which produced max sum
        break;
    }
}
for(int i=k;i>=0;i--)
{
if(cum_arr[i]==0)
{
 l=i;//saves the index one before the index from which subarray started whose summation produced maximum sum
 break;   
}
}
int ar[n+l+1];
for(int i=0;i<n;i++)
{
    ar[i]=arr[i];
}
for(int i=0;i<=l;i++)
{
    ar[i+n]=arr[i];
}
int cum_ar[n+l+1];
int s=0;
for(int i=0;i<n+l+1;i++)
{
     s+=ar[i];
     if(s<0)
     {
        s=0;
     }
     cum_ar[i]=s;
}
int max_sum2=INT_MIN;
for(int i=0;i<n+l+1;i++)
{
    max_sum2=max(max_sum2,cum_ar[i]);
}
if(max_sum<=max_sum2)
{
    return(max_sum2);
}
else{
return(max_sum);
}


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int b=kadanes_algo(a,n);
cout<<b;
    
}