#include<iostream>
using namespace std;
void Prime(int n)
{
int a[100]={0};//means every element in this array is assigned 0
for(int i=2;i<=n;i++)
{
    if(a[i]==0)//to avoid extra loops we would check that if that positioned is already marked or not
    //suppose 18 now 2 multiple has already msarked it to 1 but when there is a turn of 3 multiplre to avoid this step we 
    //first check if that position is marked or not
    {
        for(int j=i*i;j<=50;j+=i)//j=j+i becoz we want to mark the multiple of i eg:- i=4 then j=16 now multiple of 4 would be 16+4 and so on 20+4 means we are incrementing j by i
        {
            a[j]=1;//marking them to 1
        }
    }
}
for(int i=2;i<=50;i++)
{
    if(a[i]==0)
    {
    cout<<i<<endl;
    }
}
}
int main()
{
 int n;
 cin>>n;
 Prime(n);   
}