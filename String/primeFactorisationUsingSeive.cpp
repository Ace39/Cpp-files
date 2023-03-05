#include<iostream>
using namespace std;
int spf(int n)
{
int a[100]={0};
for(int i=2;i<=n;i++)
{
    if(a[i]==0)//means that indices that are unmarked
    {
        for(int j=i*i;j<=n;j=j+i)
        {
            a[j]=i;
        }
    }
    
}
/*for(int i=2;i<=n;i++)
{
if(a[i]==0)
{
    return(i);
}
else{
    return(a[i]);//returning smallest possible prime factor
}
}*/
if(a[n]==0)//means a prime number that is unmarked
{
return(n);
}
else{//indicates that the number given is not prime and is marked
    return(a[n]);
}
}
/*void PrintPrimeFactor(int n,int m)
{
while(m!=1)
{
    cout<<n<<" ";//eg suppose we are given a no. 20 now we get our smallest prime factor
    //now we 20/2=10 is stored as m=10 now we will find its smallest prime factor 

    m=m/n;//
    spf(m)
}
}*/
int main()
{
    int n;
    cin>>n;
    
    while(n!=1)
    {
        cout<<spf(n)<<endl;
        n=n/spf(n);
    }
}