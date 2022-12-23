//find the sum of the array using recurssion
#include<bits/stdc++.h>
using namespace std;
int sums(int size,int arr[])
{
    //base case
   if(size==0)
   return 0;
   if(size==1)
   return arr[0];

    //processing
    int ans=arr[0];

   //recurssion relation
   ans=ans+sums(size-1,arr+1);

   return ans;

}
int main()
{
    int n;
    cin>>n;
    int rr[n];
    for(int i=0;i<n;i++)
    {
        cin>>rr[i];
    }

    int ans=sums(n,rr);
    cout<<ans;
    
    return 0;
}
