#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"No. of elements you want in the array and the sum with which you want to compare the sum of the sub array"<<endl;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=0,sum=0;
    while(j<n && sum+a[j]<=s)
    {

        sum=sum+a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    sum=sum+a[j];
    while(i<n && sum-a[i]>=s)
    {
        sum=sum-a[i];
        i++;
    }
    if(sum==s)
    {
        cout<<i<<" "<<j<<endl;
    }
    else{
        cout<<"no such subarray exist "<<endl;
    }


    
}