#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long n,t;
long long ans;
string s[MAXN];
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long x;
		char c;
		cin>>x>>c;
		for(long long j=1;j<=x;j++){
			s[i]+=c;
		}
	}
	long long ly=1,ry=n,ls=s[1].size(),rs=s[n].size();
	while(ly<ry){
		t++;
		if(s[ly][0]!=s[ry][0]){
			ans+=min(ls,rs);
		}
		if(ls>rs){
			ls-=rs;
			ry--;rs=s[ry].size();
		}else if(ls<rs){
			rs-=ls;
			ly++;ls=s[ly].size();
		}else{
			ry--;rs=s[ry].size();
			ly++;ls=s[ly].size();
		}
	}
	cout<<ans;
	return 0;
}

