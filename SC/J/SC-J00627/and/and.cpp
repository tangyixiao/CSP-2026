#include <bits/stdc++.h>
#define rep(a, b, c) for (int i = a; i <= b; i += c)
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
const int MAXN = 2e5 + 5;
ll n, m, a[MAXN];
int main() {
	IOS;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	rep(1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	ll ans = a[1];
	for (int i = 2; i <= m; i++) ans &= a[i];
	cout << ans << endl;
	return 0;
}
/*
//#include <bits/stdc++.h>
//#define rep(a, b, c) for (int i = a; i <= b; i += c)
//#define ll long long
//#define IOS ios::sync_with_stdio(0); cin.tie(0);
//using namespace std;
//const int MAXN = 2e5 + 5;
//struct Trie {
//	int trie[MAXN][2], cnt[MAXN], tot_point;
//	pair<int, int> prev[MAXN], self[MAXN];
//	void Insert(int u, string s) {
//		rep(0, s.size() - 1, 1) {
//			int chid = s.size() - i - 1;
//			if (!trie[u][s[chid] - '0']) {
//				trie[u][s[chid] - '0'] = ++tot_point;
//				prev[tot_point] = self[u];
//				self[tot_point] = make_pair(tot_point, s[s.size() - i - 1] - '0');
//			}
//			u = trie[u][s[chid] - '0'];
//			cnt[u]++;
//		}
//	}
//};
//int n, m, ans = -2147483648, a[MAXN];
//Trie t;
//int main() {
//	IOS;
////	freopen("and.in", "r", stdin);
////	freopen("and.out", "w", stdout);
//	cin >> n >> m;
//	rep(1, n, 1) {
//		string s;
//		cin >> a[i];
//		int tmp = a[i];
//		while (tmp) {
//			s += (tmp % 10) + '0';
//			tmp /= 10;
//		}
//		t.Insert(0, s);
//	}
//	for (int i = 1; i <= t.tot_point; i++) if (t.cnt[i] == m) {
//		int tmp = i, p = t.self[tmp].second;
//		while (tmp != 0) {
////			printf("%d %d %d\n", tmp, prev[tmp].first, prev[tmp].second);
//			p = p * 2 + t.prev[tmp].second;
//			tmp = t.prev[tmp].first;
//		}
//		ans = max(ans, p);
//	}
//	cout << ans << endl;
//	return 0;
//}
*/