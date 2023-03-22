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
    int s=0,e=0,s1,e1,MAX=INT_MIN;
    while(s<=e&&s<n&&e<n)
    {
        int add=0;
        for(int i=s;i<=e;i++)
        {
        add+=arr[i];
        }
        
        if(add>MAX)
        {
            MAX=add;
            s1=s;
            e1=e;
        }
        e++;
        if(e==n)
        {
            s++;
            e=s;
        }
    }
    //cout<<"The subarray that has the maximum sum"<<endl;
    for(int i=s1;i<=e1;i++)
    {
        cout<<arr[i]<<" ";
    }
}