#include<iostream>
using namespace std;
bool Check_Sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;//base condition
    }
    bool k=Check_Sorted(arr+1,n-1);
    if(arr[0]<arr[1] && k)
    {
        return true;
    }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<Check_Sorted(arr,n);
}