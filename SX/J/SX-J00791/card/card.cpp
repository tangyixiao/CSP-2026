#include <bits/stdc++.h>
using namespace std;
int n, mm, l, d, t;
const int N = 5e5+10;
int a[N];
int b[N];
int ans[N];
map<int, int>m;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &mm);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	t = n;
	while (t--) {
		memset(b, 0, sizeof(b));
		d = 1;
		m.clear();
		l++;
		for (int i = l; i <= n; i++) {
			if (m[a[i]] == 0) {
				m[a[i]] = i;
				b[d] = a[i];
				d++;
			} else {
				for (int j = m[a[i]] + 1; j <= d - 1; j++) {
					b[j] = 0;
					m[a[j]] = 0;
				}
				d = m[a[i]] + 1;
			}
		}
		for (int i = 1; i <= d; i++) {
			ans[b[i]]++;
		}
	}
	for (int i = 1; i <= mm; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
