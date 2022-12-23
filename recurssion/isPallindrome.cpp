#include<bits/stdc++.h>
using namespace std;

bool reverse(string str,int i,int j)
{
    //base case
    if(i>j)
    return 0 ;

    if(str[i]!=str[j]){
        return false;
    }
    else{
    i++;
    j--;
    }


    reverse(str,i,j);

  


}
int main()
{
    string str;
    cin>>str;
    int size=str.length();
    bool rev=reverse(str,0,size-1);
    if(rev)
    cout<<"yes";
    else 
    cout<<"no";
    return 0;
    
}
