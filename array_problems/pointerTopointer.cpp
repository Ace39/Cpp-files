#include<iostream>
using namespace std;
int main()
{
  int p=10;
  int *ptr;//one who stores address of a pointer is dereferenced with single *
  ptr=&p;
  int **pptr;//one who stores address of a pointer is deferenced with double **
  pptr=&ptr;
  cout<<ptr<<endl;
  cout<<*ptr<<" "<<p<<" "<<&p<<endl;
  cout<<pptr<<endl;
  cout<<" "<<&p<<" "<<*pptr<<endl;
  cout<<&ptr;

}