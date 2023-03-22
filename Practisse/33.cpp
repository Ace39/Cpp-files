#include<iostream>
#include<climits>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch,100);
    cin.ignore();
    int i=0,l=0,len=0;
    int Max=INT_MIN;
    while(ch[i]!='\0')
    {
        
    if(ch[i]==' ')
    {
    if(len>Max)
    {
        Max=len;
        l=i;
    }
    len=-1;
    }
    len++;
    i++;
    }
    for(int i=l-Max;i<=l;i++)
    {
        cout<<ch[i];
    }
    cout<<endl<<Max<<" is the maximum length of the word in the sentence";
}