#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define ull unsigned long long
#define ve vector<int>
using namespace std;
const int N = 1e8 + 10;
const int INF = 0x3f3f3f3f;
int a[N];
char st[N];
int n;
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		cin >> st[i];
	}
	if (n == 1) {
		cout << 0;
		return;
	}
	ull cnt = 0;
	int sum1 = a[1];
	int sum2 = a[n];
	for (int i = 1, j = n; i < j;) {
		if (i >= j) break;
		if (st[i] == st[j]) {
			int mi = min(sum1, sum2);
			sum1 -= mi;
			sum2 -= mi;
			if (sum1 == 0) {
				i ++;
			}
			if (sum2 == 0) {
				j --;
			}
		}
		else {
			int mi = min (sum1, sum2);
			cnt += (ull)mi;
			sum1 -= mi;
			sum2 -= mi;
			if (sum1 == 0) {
				i ++;
				sum1 = a[i];
			}
			if (sum2 == 0) {
				j --;
				sum2 = a[j];
			}
		}
	}
	cout << cnt;
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int t = 1;
//	cin >> t;
	while (t --) {
		solve();
	}
	return 0;
}