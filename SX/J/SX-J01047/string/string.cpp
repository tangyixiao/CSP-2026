#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll n, m, flag;

struct Node {
	ll len;
	char c;
} a[N], b[N];

inline void solve() {
	cin >> n;
	m = 0;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i].len >> a[i].c;
		m += a[i].len;
		b[n + 1 - i] = a[i];
	}
	m = m / 2;
	ll sum = 0;
	flag = 0;
	for (int i = 1; i <= n; i++) {
		if (sum >= m)
			break;
		sum += a[i].len;
		flag = i;
	}
	ll ans = 0, leng = 0;
	ll sx = 0, sy = 0;
	for (int l = 1, r = 0; l <= flag; l ++) {
		sx += a[l].len;
//		cout << l << ' ' << sx << endl;
		if (sx > m) {
			sx = m;
		}
		while (sy + b[r + 1].len <= sx && r <= n) {
			r ++;
			sy += b[r].len;
//			cout << r << ':' << sy << " " << b[r].len << " " << b[r].c << " " << l << " " << a[l].c << endl;
			if (b[r].c != a[l].c)
				ans += b[r].len;
		}
		if (sy < sx) {
//			cout << "zhongguorenhuifei";
			leng = sx - sy;
			sy = sx;
//			cout << leng << " " << b[r + 1].len;
			b[r + 1].len -= leng;
			if (b[r + 1].c != a[l].c)
				ans += leng;
		}
//		cerr << ans << endl;
	}
	cout << ans << '\n';
}

//十年OI一场空 不开longlong见祖宗
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	T = 1;
	while (T --) {
		solve();
	}
	return 0;
}
/*
5
10 a
10 b
10 c
12 a
40 a


*/
