#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, l, r) for(int i = l; i <= r; i++)
#define req(i, r, l) for(int i = r; i >= l; i--)
using namespace std;
int rd() {
	int res = 0, f = 1; char ch;
	while(!isdigit(ch)) { if(ch == '-') f = -1; ch = getchar(); }
	while(isdigit(ch)) { res = (res << 3) + (res << 1) + (ch ^ 48); ch = getchar(); }
	return res * f;
}
const int N = 2e5 + 8;
int n, m;
int a[N], qwq[N];
int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
	n = rd(), m = rd();
	rep(i, 1, n) a[i] = rd(), qwq[i] = 1;
	int ans = 0;
	req(bit, 29, 0) {
		int cnt = 0;
		rep(i, 1, n) if(qwq[i]) 
			cnt += ((a[i] >> bit) & 1);
		if(cnt < m) continue;
		ans += (1 << bit);
		rep(i, 1, n) if(qwq[i] && ((a[i] >> bit) & 1) == 0)
			qwq[i] = 0;
	}
	cout << ans;
	return 0;
}
/*
5 3
31 3 1 15 7
*/