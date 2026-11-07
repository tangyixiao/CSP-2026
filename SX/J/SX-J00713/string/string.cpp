#include <bits/stdc++.h>
using namespace std;
int n, a[200005], cnt;
string k, l, s;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> l;
		for (int j = 1; j <= a[i]; j++)
			k += l;
	}
	int len = k.size();
	for (int i = len - 1; i >= 0; i--) {
		s += k[i];
	}
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != k[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}