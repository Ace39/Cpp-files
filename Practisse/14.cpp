#include<iostream>
using namespace std;
void Binary_search(int arr[],int n,int key)
{
int s=0;
int e=n-1;
while(s<=e)
{
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
       cout<<"The key element "<<key<<" is present at index "<<mid;
        break;
        //return(mid);
    }
    else if(key>arr[mid])
    {
        s=mid+1;
    }
    else//means arr[mid]<key
    e=mid-1;
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
int key;
cin>>key;
Binary_search(arr,n,key);
}