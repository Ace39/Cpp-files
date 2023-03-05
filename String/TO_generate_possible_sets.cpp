#include<iostream>
using namespace std;
void PrintSets(int arr[],int n)
{
for(int i=0;i<(1<<n);i++)//2 to the power raised n is written as 1<<n
{
    for(int j=0;j<n;j++)
    {
    if((i&(1<<j))!=0)
    {
        cout<<arr[j]<<" ";
    }
    }
    cout<<endl;
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
PrintSets(arr,n);

}