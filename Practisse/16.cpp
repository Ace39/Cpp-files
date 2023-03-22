#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr_No=arr[i];
        int k=i;
        int j=i-1;
        while(j>=0&&(arr[j]>curr_No))
        {
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            curr_No=arr[j];
            j--;
            k--;
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
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
    Insertion_Sort(arr,n);
}