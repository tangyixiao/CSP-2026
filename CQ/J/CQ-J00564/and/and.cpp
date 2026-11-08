#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m;
long long a[N], b[N];
int cnt[35], had[N];
vector<pair<long long, int> > v[35];
bool vis[N];
string s[N]; // a[i]的二进制 
bool cmp(pair<int, int> p, pair<int, int> q) {
	if (p.first != q.first) return p.first > q.first;
	else return p.second < q.second;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long maxn = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
		maxn = max(maxn, a[i]);
	}
	if (m == 1) {
		cout << maxn;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		long long t = a[i];
		int now = 0;
		string st = "";
		while (t > 0) {
			st = char(t % 2 + '0') + st;
			if (t % 2 == 1) {
				cnt[now]++;
			}
			t /= 2;
			now++;
		}
		s[i] = st;
	}
	int Max = 0;
	for (int i = 1; i <= n; i++) {
		long long tmp = 1, ma = 0;
		for (int j = 0; j < s[i].size(); j++) {
			if (s[i][j] == '1' && cnt[j] >= 2) ma = max(ma, tmp);
			tmp *= 2; 
		}
		Max = max(Max, (int)s[i].size());
		had[i] = ma;
	}
	vector<pair<int, int> > vt;
	for (int i = 1; i <= n; i++) vt.push_back({had[i], i});
	sort(vt.begin(), vt.end());
	for (int i = 1; i <= n; i++) {
		a[i] = b[vt[n - i].second];
//		cout << a[i] << ' ';
	}
	for (int i = 1; i <= n; i++) {
		string tmp = "";
		long long now = a[i];
		while (now > 0) {
			tmp = char(now % 2 + '0') + tmp;
			now /= 2;
		}
		int len = Max - tmp.size();
		for (int j = 1; j <= len; j++) tmp = "0" + tmp;
		for (int j = 0; j < tmp.size(); j++) {
			if (tmp[j] == '1') {
				v[Max - j - 1].push_back({a[i], i});
			}
		}
	}
	for (int i = 0; i <= Max; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
//		for (int j = 0; j < v[i].size(); j++) {
//			cout << v[i][j].first << ' ' << v[i][j].second << endl;
//		}
//		cout << endl;
//		cout << i << ":" << cnt << endl;
//		cout << v[i].size() << endl;
//		cout << i << ":";
//		for (int j = 0; j < v[i].size(); j++) cout << v[i][j].first << ' ';
//		cout << endl;
	}
	long long ans = 0, tmp = INT_MAX, last = 0;
	int mt = 0;
	for (int i = Max; i >= 0; i--) {
//		cout << i << ' ' << tmp << ' ' << ans << ":" << endl;
		if (v[i].size() < m) {
			continue ;
		}
//		cout << i << " " << mt << endl;
//		tnt += (1 << i);
		long long need1 = v[i][0].first, need2 = v[i][1].first;
		if ((tmp >> i) & 1) {
			if (!vis[v[i][0].second]) {
//				cout << i << ":" << need1 <<endl;
//				cout << v[i][v[i].size() - 1].second << "###";
//				cout << need1 << ' ' << (tmp & need1) << endl;
//				if ((tmp & need1) > ans) continue ;
				if (mt < m) {
					mt++;
				}else {
					continue ;
				}
				tmp = tmp & need1;
				last = v[i][0].second;
				vis[v[i][0].second] = 1;
			}
			if (!vis[v[i][1].second]) {
//				cout << v[i][v[i].size() - 2].second << "###";
//				cout << need2 << ' ' << (tmp & need2) << endl;
//				if ((tmp & need2) > ans) continue ;
				if (mt < m) {
					mt++;
				}else {
					continue ;
				}
				tmp = tmp & need2;
				last = v[i][1].second;
				vis[v[i][1].second] = 1;
			}
			ans += (1 << i);
//			cout << i << ' ' << need1 << ' ' << need2 << endl;
			continue ;
		}
	}
//	cout << ans << endl;
	int ttt = 0;
	sort(a + 1, a + 1 + n);
	m -= mt;
	if (m != 0) {
		for (int i = n; i >= 1; i--) {
			if (m == 0) break ;
			if (!vis[i]) {
				m--;
//				cout << ans << " " << a[i] << " " <<  m << endl;
				ans = ans & a[i];
			}
		}
	}
	cout << ans;
	return 0;
}
