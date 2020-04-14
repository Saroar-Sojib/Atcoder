#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,reminder=0,count=0;
    cin>>n;
    while(n!=0)
    {
       reminder=n%10;
       n/=10;
       if(reminder==7)
        count++;
    }
 if(count>=1)
    cout<<"Yes"<<endl;
 else
    cout<<"No"<<endl;
    return 0;
}
