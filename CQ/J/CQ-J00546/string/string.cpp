#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct node{
	int cnt;
	char t;
}p[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i].cnt>>p[i].t;
	int l=1,r=n,ans=0;
	while(l<r){
		int now=min(p[l].cnt,p[r].cnt);
		if(p[l].t!=p[r].t) ans+=now;
		p[l].cnt-=now,p[r].cnt-=now;
		if(p[l].cnt==0) l++;
		if(p[r].cnt==0) r--;
	}
	cout<<ans<<'\n';
	return 0;
}
