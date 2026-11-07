#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int n, a[N], sum, x, rightq, leftq, ans = 0, q;
string s;
char k;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> sum >> k;
		rightq += sum;
		for (int j = 1; j <= sum; j++) {
			s.push_back(k);
		}
	}
	leftq = 0;
	q = rightq;
	rightq -= 1LL;
	for (int i = 0; i < q / 2; i++) {
		if (s[leftq] == s[rightq]) {
			continue;
		} else {
			ans++;
		}
	}

	cout << ans;
	return 0;
}
