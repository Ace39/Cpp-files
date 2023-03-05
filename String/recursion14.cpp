#include<iostream>
using namespace std;
int CountPath(int s,int e)//s stands for starting point and e variable stands for ending point
{
if(s==e)//base case 
{
    return 1;//it saays that there is only one way to go to the end point
}
if(s>e)
{
    return 0;//it indicates that there is no other way to go to the end point
}
int count=0;
for(int i=1;i<=6;i++)//here i indicates the number on the dice
{
count=count+CountPath(s+i,e);
}
return count;
}
int main()
{
cout<<CountPath(0,3);
}