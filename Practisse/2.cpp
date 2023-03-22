//print all prime numbers between two number
#include<iostream>
using namespace std;
void Print_Prime(int n)
{
    int k=0;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
    k=1;
    break;
    }

}
if(k==0)
{
    cout<<n<<endl;
}
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
    Print_Prime(i);
    }
}