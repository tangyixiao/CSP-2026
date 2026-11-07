#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct rule{
	char c;
	ll st,ed;
};
void solve(){
	int n;ll len=0;cin>>n;
	vector<rule> rs;
	for(int i=0;i<n;i++){
		int t;char c;
		cin>>t>>c;
		len+=t;
		rs.push_back({c,len-t,len});
	}
	ll cur=0,lidx=0,ridx=n-1,ans=0;
	while(2*cur<=len&&lidx<=ridx){
		ll plen=min(rs[lidx].ed-cur,len-cur-rs[ridx].st);
		cur+=plen;
		if(rs[lidx].c!=rs[ridx].c) ans+=plen;
		if(cur==rs[lidx].ed) lidx++;
		if(len-cur==rs[ridx].st) ridx--;
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

