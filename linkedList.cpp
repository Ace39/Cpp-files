#include<iostream>
using namespace std;
//now this node is not built-in, it should be user-defined
class node{
public:
int data;
//now agr pointer ek integer ko point krta h to uska type int hota h means next integer ko point krra hoga = int *ptr
//now jo next hoga woh next node ko point krra hoga means next node ke address ko point krra hoga so uska type node hoga
//ek node do chizo se bna hota h ek data n dusra next ,  data can be of any datatype it can be integer , it can be float it can be double
//and jo next hota h woh ek ponter hota h jo next node ke address ko point krra hota h
node *next;
node(int val)
{
    data=val;
    next=NULL;
} 
};
int main()
{

}