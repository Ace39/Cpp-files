#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
    int arr1[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
        {
            arr1[j][i]=arr[i][j];
        }
        else
        arr1[i][i]=arr[i][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}