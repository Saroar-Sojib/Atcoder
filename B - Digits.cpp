#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,count=0,r;
    cin>>n>>k;
    while(n!=0)
    {
        r=n%k;
        n=n/k;
        count++;
    }
    cout<<count<<endl;

}
