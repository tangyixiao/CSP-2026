#include <bits/stdc++.h>
using namespace std;
char s[100000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n, q, sum = 0;

	cin >> n;
	long long j = 1;
	for (long long i = 1; i <= n; i++) {
		cin >> q;
		sum += q;
		string d;
		cin >> d;
		for (; j <= sum; j++) {
			s[j] = d[0];

		}
		j = sum + 1;
	}
	long long qwe = sum / 2;
	long long ans = qwe;
	if (qwe * qwe != sum) {
		for (int i = 1; i <= qwe; i++) {
			if (s[i] == s[sum + 1 - i]) {
				ans--;
			}
		}

	}
	cout << ans;
	return 0;
}
