/*
to find the first occurence and last occurence of a number in an array
eg:-{4,2,1,2,5,2,7} 
2 occurs at pos=1 and last occurence is at 5*/
#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key,int i)
{
  if(i==n)
  {
    return -1;
  }
  if(arr[i]==key)
  {
    return i;
  }
  else
  FirstOcc(arr,n,key,i+1);//calling FirstOcc if arr[i] is not equal to the key given
}

int LastOcc(int arr[],int n,int key)
{
  if(n==1)
  {
  if(arr[0]==key)
  {
  return 1;
  }
  else
  return 0;
  }
 int k= LastOcc(arr+1,n-1,key);
 if(k==0)//means at n we didnt find the key
 {
 if(arr[0]==key)
 {
  return n;
 }
 else
 {
  return 0;
 }
 }
 else//if k is nonzero and we have to return this to the user
 {
  return k;
 }
    
}
int main()
{
    int n;
    cin>>n;
    int key;
    cout<<"Enter a number a no. whose first ooccurence and last occurence you want to find";
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}


cout<<(FirstOcc(arr,n,key,0));
}