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
    int Max=arr[0];
    for(int i=1;i<n-1;i++)
    {
    Max=max(Max,arr[i]);//max till i
    if(Max==arr[i]&&(arr[i]>arr[i+1]))
    {
        cout<<arr[i]<<endl;
    }
    if(arr[n-1]>Max)
    {
        cout<<arr[n-1];
    }
    }
}