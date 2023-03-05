#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int mindx=INT_MAX;
    cout<<"Enter no. of elements in the array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array "<<endl;
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
//const int N=1e6;//1e6 means 10^6
int idx[100];
for(int i=0;i<n;i++)
{
    idx[i]=-1;
}
for(int i=0;i<n;i++)
{
    if(idx[a[i]]==-1)
    {
        idx[a[i]]=i;
    }
    else
    {
        mindx=min(mindx,idx[a[i]]);
    }
}
cout<<mindx+1<<endl;


}