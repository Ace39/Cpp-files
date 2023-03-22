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
    int MAX=INT_MIN;
    int k;
    for(int i=0;i<n;i++)
    {
    MAX=max(MAX,arr[i]);

    }
   int MIN=INT_MAX;
    int arr1[MAX];
    for(int i=0;i<MAX;i++)
    {
    arr1[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr1[arr[i]]>0)
        {
        if(arr1[arr[i]]<MIN)
        {
            MIN=arr1[arr[i]];
             k=arr[i];
        }
        }
    arr1[arr[i]]=i+1;    
    }
    cout<<k;
    
}
