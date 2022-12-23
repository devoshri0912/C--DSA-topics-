//Say digits- enter a number say 412 return the digit's name- four one two

#include<bits/stdc++.h>
using namespace std;

void p(int n,string arr[])
{
    //base case
    if(n==0)
    return;
    
    //processing
    int digit=n%10;
    n=n/10;
   
    //recurssion relation
     p(n,arr); 
  
    cout<<arr[digit]<<" ";   
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
   
  cout<<endl<<endl;
  
  //recurssion call
  p(n,arr);
  
  return 0;
}
