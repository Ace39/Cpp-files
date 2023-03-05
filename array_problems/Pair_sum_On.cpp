#include<iostream>
using namespace std;
int main()
{
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 //we will sort the array first
 //we will use insertion sort because time complexity for it O(n)
 //{12,45,23,34,23,98,7}
 for(int i=0;i<n-1;i++)
 {
   for(int j=i+1;j<n;j++)
   {
  if(a[j]<a[i])
  {
   int temp=a[j];
   a[j]=a[i];
   a[i]=temp;       //bubble sort technique
  }
   }
 }
 //now we have sorted the array now the main part is that keep the low end at i=0 and high end at i=n-1 the according to the sum coming
 //if greater than the given no. then decrease the higher end value and shift the high end to the left side
 int low=0,end=n-1;
 while(low<end)
 {
   if(a[low]+a[end]==k)
   {
      cout<<low+1<<" "<<end+1;
      return 0;//if this condition gets satisfied it means there exist a pair that gives the given sum
   }
   else if(a[low]+a[end]<k)
   {
      low+=1;
   }
   else{
      end=end-1;
   }
 }
/*for(int i=0;i<n;i++)
{
   cout<<a[i]<<" ";

}*/
return false;//if no such pair exist which sums up to give that sum then return false

}