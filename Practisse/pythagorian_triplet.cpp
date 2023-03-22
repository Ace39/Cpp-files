#include<bits/stdc++.h>
using namespace std;
void Check_Pythagorean_triplet(int a,int b,int c)
{
int Max=max(a,max(b,c));
int sum=a*a+b*b+c*c;
int final=sum-(Max*Max);
if(final==Max*Max)
{
    cout<<"Pythagorean Triplet";
}
else
cout<<"Not Pythagorean Triplet";
}
int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Check_Pythagorean_triplet(a,b,c);
}