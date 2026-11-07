#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,ans;
char c;
string s;
map<int,char> mp;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int j=1;j<=x;j++) s+=c;
	}
	int len=s.size();
	for(int i=0;i<len;i++) mp[i]=s[i];
	for(int i=0;i<(len/2);i++){
		if(mp[i]!=mp[len-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
