#include<iostream>
using namespace std;
void Pi_replace(string s,int i,int l)
{
    if(i==l)
    {
    return;
    }
string str=s.substr(i,2);
if(str=="pi")
{
   // s.insert(i,"3.14");
    //s.erase(i+4,2);
    cout<<"3.14";
    Pi_replace(s,i+2,l);
}
else
{
cout<<s[i];
Pi_replace(s,i+1,l);
}


}
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    Pi_replace(s,0,l);

}