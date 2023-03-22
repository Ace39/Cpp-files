#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int Max=INT_MIN;
    int Min=INT_MAX;

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(int i=0;i<n;i++)
{
     Max=max(arr[i],Max);
     Min=min(arr[i],Min);
}
cout<<Max<<endl;
cout<<Min<<endl;

}