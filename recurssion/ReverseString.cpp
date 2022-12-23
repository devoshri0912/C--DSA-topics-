#include<bits/stdc++.h>
using namespace std;

void reverse(string&str,int i,int j)
{
    //base case
    if(i>j)
    return;

    swap(str[i],str[j]);
    i++;
    j--;


    reverse(str,i,j);


}
int main()
{
    string str;
    cin>>str;
    int size=str.length();
    reverse(str,0,size-1);
    cout<<str;
    return 0;
    
}
