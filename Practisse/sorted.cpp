#include<iostream>
#include<climits>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int key;
cin>>key;
int c=0;
//int arr1[n][m];
//first sort the row then sort the columns
for(int k=0;k<n;k++)
{
    
for(int i=0;i<m;i++)
{
    for(int j=0;j<m-i;j++)
    {
        if(arr[k][j]>arr[k][j+1])
        {
            int temp=arr[k][j];
            arr[k][j]=arr[k][j+1];
            arr[k][j+1]=temp;
        }
    }
}
}//all rows are sorted
for(int k=0;k<m;k++)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j][k]>arr[j+1][k])
            {
                int temp=arr[j][k];
                arr[j][k]=arr[j+1][k];
                arr[j+1][k]=temp;
            }
        }
    }
}//colums are sorted
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]==key)
        {
            c=1;
        }
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
if(c==1)
cout<<key<<" is present in the array";
}