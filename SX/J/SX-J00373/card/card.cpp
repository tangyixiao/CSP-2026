#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], t[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t[a[i]] = i;
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		cout << t[a[i]] << " ";
	}
	return 0;
}
