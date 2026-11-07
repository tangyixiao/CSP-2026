#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
long long n, m;
int a[N], wei[N];
bool num[N][31];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		sort(a, a + n + 1);
		cout << a[n];
		return 0;
	}
	return 0;
}
