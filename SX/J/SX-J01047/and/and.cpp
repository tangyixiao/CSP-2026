#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
int n, m;
int a[N];
int x[N][40];
int suu[40];
int aaa[40];
vector<pair<int, int> > v;

inline bool cmp(int t, int tt) {
	return t > tt;
}

inline void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
//	for (int i = 1; i <= 50; i ++) {
//		cout << a[i] << " ";
//	}
//  cout << endl;
//	int ans = a[m];
	for (int i = 1; i <= n; i ++) {
		int xx = a[i], ii = 0;
		while (xx > 0) {
			ii ++;
			x[i][ii] = xx % 2;
			xx >>= 1;
		}
		x[i][0] = ii;
		suu[ii] ++;
	}
	int mmaa = 0;
	for (int i = 1; i <= 30; i ++) {
		mmaa = max(mmaa, suu[i]);
	}
	int ss = 0;
	for (int i = 1; i <= 30; i ++) {
		if (suu[i] == mmaa)
			ss = i;
	}
	mmaa = ss;
	int flag = 0;
	for (int i = 1; i <= n; i ++) {
		if (x[i][0] == mmaa && a[i] > a[flag]) {
			flag = i;
		}
	}
//	cout << flag << " " << a[flag] << endl;
	int cnt = 1;
	v.clear();
	int sum = 0;
	for (int i = 1; i <= n; i ++) {
		if (i == flag)
			continue;
//			cout << (262144 & 262100 ) << endl;
//			cout <<  (ans &a[i]) << endl;
//			cout << ans -	(ans &a[i]) << endl;
		sum = 0;
		for (int j = 1; j <= x[flag][0]; j ++) {
			if (x[flag][j] == 1 && x[i][j] == 0) {
				sum += (1 << j);
			}
		}
//		cout << sum << endl;
		v.push_back({sum, i});
	}
	sort(v.begin(), v.end());
	for (int i = 1; i <= 30; i ++) {
		if (x[flag][i] == 1)
			aaa[i] ++;
	}
	for (int i = 0; i < m - 1; i ++) {
		for (int j = 1; j <= 30; j ++) {
//			cout << a[v[i].second] << " ";

			if (x[v[i].second][j] == 1)
				aaa[j] ++;
		}
//		cerr << endl;
	}
	sum = 0;
	for (int i = 1; i <= 30; i ++) {
//		cout << aaa[i] << endl;
		if (aaa[i] == m) {
			sum += (1 << (i - 1));
		}
	}
	cout << sum << '\n';
	return;
}

//十年OI一场空 不开longlong见祖宗
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int T;
	T = 1;
	while (T --) {
		solve ();
	}
	return 0;
}

/*
4 2
3 15 12 12

*/