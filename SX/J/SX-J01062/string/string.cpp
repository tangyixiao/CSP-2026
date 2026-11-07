#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;

struct zfd {
	long long k;
	char c;
};
zfd a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "r", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, cnt = 0;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].k >> a[i].c;
	int l = 1, r = n;
	while (l < r) {
		int minn = min(a[l].k, a[r].k);
		if (a[l].c != a[r].c)
			cnt += minn;
		if (a[l].k < a[r].k) {
			l++;
			a[r].k -= minn;
		} else if (a[l].k > a[r].k) {
			r--;
			a[l].k -= minn;
		} else {
			l++;
			r--;
		}
	}
	cout << cnt;
	return 0;
}