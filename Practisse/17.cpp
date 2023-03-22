#include<iostream>//max till i
#include<climits>
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
int Max=INT_MIN;
for(int i=0;i<n;i++)
{
    Max=max(Max,arr[i]);
    cout<<i<<" "<<Max<<endl;
}
}