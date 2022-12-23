#include<bits/stdc++.h>
using namespace std;
bool found(int s,int e,int arr[],int k)
{
    //base case1
   if(s>e)
   return false;
  
  //processing
  int mid=s+(e-s)/2;

  //base case2
 if(arr[mid]==k)
 return true;


   //recurssion relation
   if(arr[mid]<k)
   return found(mid+1,e,arr,k);
   else
    return found(s,mid-1,arr,k);





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
    bool ans=found(0,n,rr,key);
    
    if(ans)
        cout<<"present";
    else
    cout<<"not present";
        
    return 0;
}
