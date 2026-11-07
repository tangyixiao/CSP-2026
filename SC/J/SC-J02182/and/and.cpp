#include <bits/stdc++.h>
#define int long long
#define fp(i,a,b) for(int i=a;i<=b;i++)
#define pf(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

constexpr int MN = 2e5+10;
int n, m, a[MN];
set<int> st[2];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int p = 0;
	cin>>n>>m;
	fp(i,1,n) cin>>a[i], st[p].insert(i);
	pf(i,29,0) {
		int cnt = 0;
		st[p^1].clear();
		for(auto j: st[p]) {
			if(a[j] & (1ll << i)) {
				cnt ++;
				st[p^1].insert(j);
			}
		}
		if(cnt >= m) p ^= 1;
	}
	int ans = (1ll<<30) - 1;
	for(auto j: st[p]) {
		ans &= a[j];
	}
	cout<<ans;
	return 0;
}
