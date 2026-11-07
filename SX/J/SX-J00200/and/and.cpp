#include <bits/stdc++.h>
using namespace std;
const int N = 1e8;
long long b[N];
long long n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> b[i];
	sort(b + 1, b + n + 1);
	cout << b[n - m + 1];
	return 0;
}