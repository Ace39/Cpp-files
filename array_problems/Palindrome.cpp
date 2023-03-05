#include<iostream>
using namespace std;
int main()
{
  int i=0,k=0;
  char ch[100];
  cin.getline(ch,100);
  while(ch[i]!='\0')
  {
    i++;
  }
  for(int j=0;j<i;j++)
  {
    if(ch[j]!=ch[i-j-1])
    {
        k=1;
        break;
    }
  }
  if(k==0)
  {
    cout<<"Palindrome";

  }
  else{
    cout<<"Not a palindrome";
  }
}