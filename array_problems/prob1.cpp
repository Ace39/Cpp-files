/*
Print maximum no. till ith position.
given an array of size n a[] . for every i from o to n-1 output max(a[0],a[1],a[2],....a[i])
*/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int maxNo=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*for(int i=0;i<n;i++)
    {
    for(int j=0;j<=i;j++)
    {
        maxNo=max(maxNo,arr[j]);
    }
    cout<<"max no. till "<<i<<"th position is "<<maxNo<<endl;
    }*/
    //the above prog states there is no need to create two loops only one loop is required
for(int i=0;i<n;i++)
{
    maxNo=max(maxNo,arr[i]);
    cout<<maxNo<<endl;
}
}