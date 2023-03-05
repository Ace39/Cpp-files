
/*
Get bit
we need to get bit position at given position
*/
#include<iostream>
using namespace std;
int ToGetBit(int n,int i)
{
    if(n&(1<<i)!=0)
    {
        return 1;
    }
    else 
    return 0;

}
int main()
{
      int n,i;
      cin>>n>>i;
      cout<<ToGetBit(n,i);


}