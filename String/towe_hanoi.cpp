#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char src,char dest,char help)
{ 
    if(n==0)
    {
        return;
    }
    TowerOfHanoi(n-1,src,help,dest);
    cout<<"shift block from "<<src<<" to "<<dest<<endl;
    TowerOfHanoi(n-1,help,dest,src);

}
 int main()
 {
    int n;
    cin>>n;
    cout<<"Enter characters ";
    char src,dest,help;
    cin>>src>>dest>>help;
    TowerOfHanoi(n,src,dest,help);

 }