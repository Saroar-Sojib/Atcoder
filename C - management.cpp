#include"bits/stdc++.h"
#include<cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
 
int main(){
	int n;
	map<int,int>mp;
	cin>>n;
	vector<int>a(n);
	rep(i,n-1){
		cin>>a[i];
		mp[a[i]]++;
	}
	// for(auto p:mp){
	// 	cout<<p.second<<endl;
	// }
	for(int i=1;i<=n;++i){
		cout<<mp[i]<<endl;
	}
}
