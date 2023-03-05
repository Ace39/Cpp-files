#include<iostream>
#include<climits>
using namespace std;
int main()
{ int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int sum_max=INT_MIN;

for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        int sum=0;
        for(int k=i;k<=j;k++)
        {
           sum+=a[k]; 
        }
        sum_max=max(sum_max,sum);
        
    }
}
cout<<"The maximum sum of subarray is "<<sum_max<<endl;

}