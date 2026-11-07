#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, a[200005], sum, cnt;
char s[200005], aa[2000005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	} else {
		int j = 0;
		for (int i = 1; i <= n; i++) {

			cin >> a[i] >> s[i];
			sum += a[i];
			for (int k = 0; k < a[i]; k++) {
				j++;
				aa[j] = s[i];

			}
		}

		for (int i = 1; i <= sum / 2; i++, j--) {
			if (aa[j] != aa[i]) {
				aa[i] = aa[j];
				cnt++;
			}


		}

	}
	cout << cnt;
	return 0;
}
