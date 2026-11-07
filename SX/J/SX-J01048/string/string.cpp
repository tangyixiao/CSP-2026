#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, a, val;
char x;
long long node, ans;
int bl[80000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> x;
		val = int(x);
		for (int j = 1; j <= a; j++) {
			node++;
			bl[node] = val;
		}
	}
	for (int i = 1; i <= node / 2; i++) {
		if (bl[i] != bl[node - i + 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}








