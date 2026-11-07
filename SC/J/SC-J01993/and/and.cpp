#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
ll a[N];
void solve(){
	int n,m;cin >> n >> m;
	vector<ll> now,nxt;
	for (int i=1;i<=n;++i) cin >> a[i],now.emplace_back(a[i]);
	for (int i=31,cnt=0;i>=0;--i){
		cnt=0;
		for (ll &w:now){
			if (w>>i&1) ++cnt;
		}
		if (cnt>=m){
			nxt.clear();
			for (ll &w:now){
				if (w>>i&1) nxt.emplace_back(w);
			}
			swap(now,nxt);
		}
	}
	ll ans=(1ll<<40)-1;
	for (ll &w:now) ans&=w;
	cout<<ans<<"\n";
}
//a_i<2^30
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//	cin >> T;
	for (int _=0;_<T;++_) solve();
	cout.flush();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//直接拆位就好了
//9:12