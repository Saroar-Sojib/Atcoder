#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long count=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            continue;
        }
        else
            count+=i;
 
    }
    cout<<count<<endl;
    return 0;
}
