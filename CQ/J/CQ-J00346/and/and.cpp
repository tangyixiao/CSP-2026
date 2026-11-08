#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5 + 5;
ll n, m;
bool cmp (ll x, ll y) {
	return x > y;
}
ll a[N];
ll t[N * 4];
ll ls(ll p) {
	return p << 1;
}
ll rs(ll p) {
	return p << 1 | 1;
}
void push_up(ll p) {
	t[p] = t[ls(p)] & t[rs(p)];
}
void build(ll p, ll pl, ll pr) {
	if (pl == pr) {
		t[p] = a[pl];
		return ;
	}
	ll mid = pl + pr >> 1;
	build(ls(p), pl, mid);
	build(rs(p), mid + 1, pr);
	push_up(p);
}
ll query(ll L, ll R, ll p, ll pl, ll pr) {
	if (L <= pl && pr <= R) {
		return t[p];
	}
	ll mid = pl + pr >> 1;
	ll ans = (1LL << 32) - 1LL;
//	cout << ans << "^^\n";
	if (L <= mid) ans = ans & query(L, R, ls(p), pl, mid);
	if (R > mid) ans = ans & query(L, R, rs(p), mid + 1, pr);
	
	return ans;
}
ll tot = 0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	build(1, 1, n);
	
	
	for (ll i = 1; i + m - 1 <= n; i ++) {
		ll ans = query(i, i + m - 1, 1, 1, n);
//		cout << i << " " << i + m - 1 << " " << ans << endl; 
		tot = max(tot, ans);
	}
	cout << tot;
	return 0;
}
/*
5 3
31 3 1 15 7

4 2
3 15 12 12

5 3
31 3 1 15 7
*/
