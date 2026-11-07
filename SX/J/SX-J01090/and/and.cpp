#include <bits/stdc++.h>
using namespace std;
int a[200001][50000];
int s[200001];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long b;
	int n, ans = -1, MAX = -2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b;
		s[i] = 1;
		ans = -1;
		while (b > 0) {
			ans++;
			if (ans > MAX) {
				MAX = ans;
			}
			a[i][ans] = b % 2;
			b /= 2;
		}
	}
	for (int i = MAX; i >= 0; i--) {
		for (int j = 0; j < n; j++) {

		}

	}
	cout << "-1";
	return 0;
}
