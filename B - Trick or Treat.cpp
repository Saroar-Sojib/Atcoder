#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int a,b;
    cin>>a>>b;
    while(b--)
    {
        int k;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            int q;
            cin>>q;
            vec.push_back(q);
        }
    }
    int count=0,i=1;
 
    while(i<=a)
    {
        int c=0;
        for(int p=0;p<vec.size();p++)
        {
            if(i!=vec[p])c++;
        }
        if(c==vec.size())
        {
            count++;
        }
        i++;
    }
 
    cout<<count<<endl;
 
    return 0;
 
}
