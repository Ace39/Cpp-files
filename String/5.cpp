#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char chr;
    int max=0;
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
    freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(max<=freq[i])
        {
        max=freq[i];
        chr='a'+i;
        }
    }
cout<<max<<" "<<chr;

}