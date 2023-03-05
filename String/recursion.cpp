#include<iostream>
using namespace std;
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int k=Sum(n-1);
    return(n+k);//lets take n=4
    //sum 4 would cll sum 3 , sum 3 calls sum2, sum2 calls sum1,sum1 calls sum0 now sum 0 is base condition after that returning process 
    //gets started , now we know that on calling a function returns a value to the object who called it 
    //so sum0 returns 0 to sum1 as sum1 called it, now sum1 returns (1+0) to sum2 as sum2 calls sum1 then sum2 returns(2+(1+0))to sum3 
    //as sum3 called sum2 and the process keeps on continuing
}
int main()
{
int n;
cin>>n;
cout<<Sum(n);
}