#include<iostream>
using namespace std;
int Count(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int cnt=0;
    for(int i=1;i<=6;i++)
    {
    cnt+=Count(s+i,e);
    }                            
}
int main()
{
cout<<Count(0,3);
}