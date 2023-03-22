//Linear Search
#include<iostream>
using namespace std;
void LinaerSearch(int arr[],int n,int key)
{
    int k=0,k1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==key)
        {
        k=1;
        k1=j;
        break;
        }
    }
    if(k==1)
    {
        cout<<"The given "<<key<<" is present in the array at index"<<k1;
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
    LinaerSearch(arr,n,key);

}