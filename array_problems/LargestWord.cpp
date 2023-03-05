#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int c=0,maxLen=0;
  char ch[100];
  cin.getline(ch,100);
  /*int i=0;
  while(ch[i]!='\0')
  {
    i++;
  } */ 
  for(int j=0;j<100;j++)
  {
    
    while(ch[j]!=' ')
    {
    c++;
    }
    if(ch[j]==' '||ch[j]=='\0')
    {
      if(maxLen<=c)
{
  maxLen=c;
  c=0;
}
    }
    if(ch[j]==' ')
    {
        c=0;
    }
    if(ch[j]=='\0')
    {
      break;
    }
    
  }
  cout<<maxLen;
}