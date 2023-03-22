//we have to produce an array so that the of the first index of the array to the last index of the subarray is equal to the given sum
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];  
    }
    int s=0,e=0;//s represents the starting index and the e represents the ending index
    while(s<=e&&e<n&&s<n)
    {
        int add=0;
    for(int i=s;i<=e;i++)
    {
        add+=arr[i];
    }
    if(add<sum)
    {
        e++;
    }
    if(add>sum)
    {
        s++;
    }
    if(add==sum)
    {
        cout<<"index starting from "<<s<<" and ending to "<<e;
        break;
    }
    }
}