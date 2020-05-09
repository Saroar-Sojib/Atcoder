#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    long long n;
    cin>>n;
    while(n--)
    {
        string p;
        cin>>p;
        s.insert(p);
    }
    cout<<s.size()<<endl;
    return 0;
}
