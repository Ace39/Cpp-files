#include<iostream>
using namespace std;
void Decreasing(int n)
{
    
    if(n==1)
    {
        cout<<"1"<<endl;
        return;//means using this the program would terminate means just like the use of break
    }
    cout<<n<<endl;
Decreasing(n-1);
}
void Increasing(int n)
{
  if(n==1)
  {
    cout<<"1"<<endl;
    return;//it indicates that the code wont return anything to the caller object
  }
  Increasing(n-1);
  cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    Decreasing(n);
}