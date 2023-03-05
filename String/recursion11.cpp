#include<iostream>
using namespace std;
int Count(int s,int e)
{
//base case
if(s==e)
{
    return 1;
}
int k=Count(s+1,e);
return(k+(e-(s+1)));
}
int main()
{
cout<<Count(0,3);
}