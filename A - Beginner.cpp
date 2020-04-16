#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n;
    cin>>n>>r;
    if(n>=10)
        cout<<r<<endl;
    else
        cout<<r+100*(10-n)<<endl;
    return 0;
}
