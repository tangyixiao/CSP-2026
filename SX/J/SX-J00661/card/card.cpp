#include <bits/stdc++.h>

#define int long long
using namespace std;
const int N = 2e5+10;

int n, m;
int a[N], b[N];
queue<int> q;
bool flag[N];

int ans[N];

signed main() {
//
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {

		cin >> a[i];

	}

	for (int js = 1; js <= m; js++) {

		for (int i = 1; i <= n; i++) {

			flag[i] = false;

		}

		b[1] = a[js];

		flag[a[js]] = true;

		bool ok = false;
		bool bian = false;

		int t = 1;

		for (int i = js + 1; i <= n; i++) {

			ok = false;

			if (flag[a[i]] == true) {

				for (int j = 1; j <= n; j++) {

					if (b[j] == a[i]) {
						bian = true;
						t = j;
						b[j] == 0;
					}

					if (bian == true) {
						flag[b[j]] == false;
						b[j] = 0;

					}

				}
				flag[b[t]] == true;
				b[t] = a[i];
				continue;
			}
			flag[b[i]] == true;
			b[i] = a[i];

		}

		for (int i = 1; i <= n; i++) {

			if (b[i] != 0) {
//				cout << b[i] << "***" << endl;
				ans[b[i]]++;

			}

			b[i] = 0;

		}

	}

	ans[a[n]]++;

	for (int i = 1; i <= n; i++) {

		if (ans[i] != 0) {

			cout << ans[i] << " ";

		}

	}

	return 0;
}
