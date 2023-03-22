#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
{
    cin>>arr[i];//these must contain must negative numbers as well as positive
}
int MAX=INT_MIN;
for(int i=0;i<n;i++)
{
    MAX=max(MAX,arr[i]);
}
int arri[MAX]={0};
for(int i=0;i<n;i++)
{
    arri[arr[i]]=1;
}
for(int i=0;i<MAX;i++)
{
    if(arri[i]==0)
    {
        cout<<i<<" is the smallest positive number missing from the array";
        break;
    }
}

}