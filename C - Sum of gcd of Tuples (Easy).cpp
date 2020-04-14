#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long k;
    cin >> k;
    long long sum = 0;
    for(long long a=1; a<=k; a++){
        for(long long b=1; b<=k; b++){
            for(long long c=1; c<=k; c++){
                long long d = gcd(a,b);
                sum += gcd(c,d);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
