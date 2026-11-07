#include<bits/stdc++.h>
using namespace std;
string s;
char r;
long long n,t,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>t>>r;
		for(int j = 1;j <= t;j++)s+=r;
	}
	int x=s.size()/2;
	for(int i = 0;i < x;i++){
		long long k=s.size()-i-1;
		if(s[i]!=s[k]) ans++;
	}
	cout<<ans;
	return 0;
}
