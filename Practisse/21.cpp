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
    int c=1;
    int Max=INT_MIN;
    int diff=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
     if(diff==(arr[i]-arr[i-1])) 
     {
        c++;
        
     }  
     else
     {
        Max=max(Max,c);
        c=1;
     }
     diff=arr[i]-arr[i-1];
    }
    cout<<Max;
}