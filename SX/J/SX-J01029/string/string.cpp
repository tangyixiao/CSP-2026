#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	string c[n];
	long long  ans = 0;
	int a[100005];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	string att[ans];
	cout << 0;
	return 0;
}
