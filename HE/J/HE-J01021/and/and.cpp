#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
ll n,m,a[N],ans;
bool cmp(ll x,ll y) {
	return x>y;
}
void dfs1(int x,ll cnt,ll res) {
	if(cnt==m) {
		ans=max(ans,res);
		return;
	}
	if(x==n+1)return;
	if(cnt+n-x+1<m)return;
	if(cnt==0)dfs1(x+1,cnt+1,a[x]);
	else dfs1(x+1,cnt+1,res&a[x]);
	dfs1(x+1,cnt,res);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)cin>>a[i];
	sort(a+1,a+1+n,cmp);
	if(n<=20)dfs1(1,0,0);
	else if(m==2) {
		if(n<=10000) {
			for(int i=1; i<=n; i++)
				for(int j=1; j<i; j++)ans=max(ans,a[i]&a[j]);
		} else {
			for(int i=2; i<=n; i++) {
				ans=max(ans,a[i]&a[i-1]);
			}
		}

	} else {
		for(int i=1; i<=m; i++) {
			if(i==1)ans=a[i];
			else ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}

