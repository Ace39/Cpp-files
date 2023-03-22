//Two pairs so that the sum of both that two pairs is equal to given K 
#include<iostream>
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
    int k;
    cin>>k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=0;
            sum+=arr[i]+arr[j];
            if(sum==k)
            {
                cout<<arr[i]<<" "<<arr[j];
                break;
            }
        }
    }
    
}