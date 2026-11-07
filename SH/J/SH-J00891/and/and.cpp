#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
ll n,m,a[N],ans,f[N];
void solve(ll cur,ll lst,ll sum) { //cur=当前选第几个 lst=上一个选的几号 sum=当前按位与的和 
	if (cur==m+1) {
		ans=max(ans,sum);
		return;
	}
	for (ll i=lst+1;i<=n;i++) {
		if (cur==1) solve(cur+1,i,a[i]);
		else solve(cur+1,i,(sum&a[i]));
	}
} 
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (ll i=1;i<=n;i++) cin>>a[i];
	if (n==m) {
		ll qwq=a[1];
		for (ll i=2;i<=n;i++) qwq=qwq&a[i];
		cout<<qwq;
 	}
	else if (n<=2000) {
		solve(1,0,0);
		cout<<ans<<'\n';
	}
	else {
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}
