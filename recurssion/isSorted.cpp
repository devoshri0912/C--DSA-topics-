//checks if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int size,int arr[])
{
    //base case
   if(size==0|size==1)
   return true;

    if(arr[0]>arr[1])
    return false;

   //recurssion relation
   bool ans=isSorted(size-1,arr+1);

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

    bool ans=isSorted(n,rr);

    if(ans)
    cout<<"array is sorted";
    else
    cout<<"array is not sorted";
    return 0;
}
