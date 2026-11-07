#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5, A = 31;
int n, m, ans = 0;
unordered_multiset<int> st, q;
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
//	freopen("down/and/and5.in", "r", stdin);
//	freopen("down/and/and55.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1, a; i <= n; ++i) {
		cin >> a;
		st.insert(a);
	}
	for (int i = A - 1; i >= 0; --i) {
		q.clear();
		int p = INT_MAX;
		for (int j : st) {
			if ((j >> i) & 1) {
				q.insert(j);
				p &= j;
			}
		}
		if ((int)q.size() == m) {
			ans = p;
			break;
		}
		if ((int)q.size() > m) {
			st = q;
			ans <<= 1;
			ans |= 1;
		}
		if ((int)q.size() < m) {
			ans <<= 1;
		}
	}
	cout << ans << '\n';
	return 0;
}