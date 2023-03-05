#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int c=2;
    int maxL=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    for(int i=2;i<n;i++)
    {
        int current=a[i]-a[i-1];
        if(current==pd)
         {
          c++;
         }
         else
         {
            pd=current;
         c=2;}
         maxL=max(c,maxL);
    }
    cout<<maxL;
}