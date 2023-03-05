#include<iostream>
using namespace std;
int main()
{
   int p=10;
   int *ptr;//declaration of a poiinter
   //a pointer stores the addrerss of any variable
   //&p says the adrress of the variable p *ptr would give the value at that adrees which is p itself
   ptr=&p;
   cout<<p<<endl;
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<&p<<endl; 
}