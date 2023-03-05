/*
given an array a[] of size n.Output sum of each subarray of the given array.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in the array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
         sum=sum+arr[j];
         cout<<sum<<endl;
        }
    }
}