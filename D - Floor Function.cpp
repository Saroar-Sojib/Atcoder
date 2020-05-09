#include<bits/stdc++.h>
#define _Max(a,b,c) Max(a,Max(b,c))
#define lop(i,a,b) for(int i=a;i<b; i++)
#define pb push_back
using namespace std;
/*
    *
    * Saroar Zahan Sojib
    * Green University - Bangladesh (GUB)
    *
*/
int main()
{
    long long A, B, N;
    cin >> A >> B >> N;
    long long x = min(B-1, N);
    cout << (A*x)/B - A*(x/B) << endl;
    return 0;
}
