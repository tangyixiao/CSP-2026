#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+10, M = 3e5+10;
ll n, m, a[N], b[M], ans[N];
bool f[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof(b));
		memset(f, 0, sizeof(f));
		for (int j = i; j <= n; j++) {
			b[a[j]]++;
		}
		ll point = i;
//		cout << point << ' ';
		for (int j = i; j <= n; j++) {
			if (b[a[point]] == 1) {
				if (!f[a[point]]) {
					ans[a[point]]++;
					f[a[point]] = true;
				}
				point++;
//				cout << i << ' ' << point << endl;
			}
//			cout << point << ' ';
			if (a[point] == a[j]) {
				if (!f[a[j]]) {
					ans[a[j]]++;
					f[a[j]] = true;
				}

				for (int k = point; k < j; k++) {
					b[a[k]]--;
				}
				point = j;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
