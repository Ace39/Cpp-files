//binary search
#include<iostream>
using namespace std;
void Binary_Search(int arr[],int n,int key)
{
    //we are given sorted array
    int first=0,last=n-1;
    
    while(first<=last)
    {
       int mid=(first+last)/2;
        if(arr[mid]==key)
    {
        cout<<"The "<<key<<" element is present at index "<<mid;
        break;
    }
        if(key>arr[mid])
        {
            //it means the key element lies on the right handside of the array
            first=mid+1;
        }
        if(key<arr[mid])
        {
            last=mid-1;
        }
        
    }

}
int main()
{
int n;
cin>>n;
int key;
cin>>key;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
Binary_Search(arr,n,key);
}