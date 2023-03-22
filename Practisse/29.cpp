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
    int strt=0;
    int end=n-1;
    while(strt<=end)
    {
        if(arr[strt]+arr[end]==k)
        {
        cout<<strt<<" "<<end<<endl;
        cout<<arr[strt]<<" "<<arr[end]<<endl;
        break;
        }
        if(arr[strt]+arr[end]<k)
        {
            strt++;
        }
        if(arr[strt]+arr[end]>k)
        {
            end--;
        }
    }
}