#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	string s=" ";
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) s=s+c;
	}
	int l=s.size();
	for(int i=1;i<=s.size()/2;i++){
		if(s[i]!=s[l-i]) ans++;
	}
	cout<<ans;
	return 0;
}