#include<bits/stdc++.h>
#define _for(i, a, b) for(int i = a; i <= b; ++i)
#define for_(i, a, b) for(int i = a; i >= b; --i)
using namespace std;
const int N = 2e5 + 5;
int n, a[N], s[N], e[N], l = 1, cnt, t, ans;
char c[N];
int main(){
	ios::sync_with_stdio(false), cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	_for(i, 1, n){
		cin >> a[i] >> c[i];
		s[i] = l, e[i] = l + a[i] - 1;
		l += a[i];
	}
	l--;
	_for(i, 1, n){
		if(e[i] > l / 2){
			t = i;
			break;
		}
		int rl = l + 1 - e[i], rr = l + 1 - s[i];
		int tl = upper_bound(s + 1, s + n + 1, rl) - begin(s) - 1;
		int tr = upper_bound(s + 1, s + n + 1, rr) - begin(s) - 1;
		if(tl == 200004) tl = n;
		if(tr == 200004) tr = n;
		if(c[tl] != c[i]) cnt += e[tl] - rl + 1;
		if(c[tr] != c[i]) cnt += rr - s[tr] + 1;
		_for(j, tl + 1, tr - 1) if(c[j] != c[i]) cnt += a[j];
	}
	cnt += (l % 2 ? max(l + 1 - e[t] - s[t], 0) : max(l - e[t] - s[t], 0));
	ans = cnt;
	cnt = 0;
	for_(i, n, 1){
		if(s[i] <= l / 2){
			t = i;
			break;
		}
		int ll = l + 1 - e[i], lr = l + 1 - s[i];
		int tl = upper_bound(s + 1, s + n + 1, ll) - begin(s) - 1;
		int tr = upper_bound(s + 1, s + n + 1, lr) - begin(s) - 1;
		if(tl == 200004) tl = n;
		if(tr == 200004) tr = n;
		if(c[tl] != c[i]) cnt += e[tl] - ll + 1;
		if(c[tr] != c[i]) cnt += lr - s[tr] + 1;
		_for(j, tl + 1, tr - 1) if(c[j] != c[i]) cnt += a[j];
	}
	cnt += (l % 2 ? max(e[t] - l - 1 + s[t], 0) : max(e[t] - l + s[t], 0));
	ans = min(ans, cnt);
	cout << ans;
	return 0;
}