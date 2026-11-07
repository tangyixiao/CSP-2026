#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	string t = "";
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; i++) {
			t += c[i];
		}
	}
	int l = t.size(), num = l / 2 + l % 2, sum = 0;
	for (int i = 0; i <= num; i++) {
		if (t[i] != t[l - 1 - i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}