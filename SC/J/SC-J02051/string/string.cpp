#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,len=0,ans=0;
string s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		len+=x;
		for(int j=1;j<=x;j++) s+=c;
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}