/* to fina a unique number in an array where all numbers except one are present twice

*/
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={2,4,6,3,4,6,2};
    int a[100];
    for(int i=0;i<100;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<7;i++)
    {
    a[arr[i]]++;
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]==1)
        {
            cout<<i;
        }
    }

    
}