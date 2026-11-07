#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+ 5;
int n, m, a[N], b[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << ' ';
	return 0;
}
