//find if the entered key exists in the given array using recursion (linear search)
#include<bits/stdc++.h>
using namespace std;
bool found(int size,int arr[],int k)
{
    //base case
   if(size==0)
   return false;
  
  //processing
  if(arr[0]==k)
  return true;

   //recurssion relation
   bool ans=found(size-1,arr+1,k);

   return ans;



}
int main()
{
    int n;
    cin>>n;
    int rr[n];
    int key;
   
    for(int i=0;i<n;i++)
    {
        cin>>rr[i];
    }
     cin>>key;
    bool ans=found(n,rr,key);
    cout<<ans;
    
    return 0;
}
