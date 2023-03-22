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
    int s=0,e=0;
    while(s<=e&&s<n&&e<n)
    {
        for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    e++;
    if(e==n)
    {
        s++;
        e=s;
    }
    }
}