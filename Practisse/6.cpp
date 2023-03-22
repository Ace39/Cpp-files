//hexadecimal to decimal
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int HexaDecimal_to_Decimal(string s,int l)
{
    int k=0;
for(int i=l-1;i>=0;i--)
{
    
    if(s[i]=='A'||s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='F')
    {
        int j=(s[i]-'A')+10;
        k=k+j*pow(16,(l-(i+1)));
    }
    if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
    {
      int h=s[i]-'0';
      k=k+h*pow(16,(l-(i+1)));  
    }
}
return(k);

}
int main()
{
   string s;
   cin>>s;//s=1CF
   int l=s.length();
   cout<<HexaDecimal_to_Decimal(s,l);
}