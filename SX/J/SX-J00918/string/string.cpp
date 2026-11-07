#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int q = 0;
	int arr[n];
	char rra[n];
	int z;
	char x;
	for (int i = 0; i < n; i++) {
		cin >> z >> x;
		q += z;
		rra[i] = x;
		arr[i] = z;
	}
	int o = 0;
	char s[q];
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < arr[i]; j++) {
			s[i + o] = rra[i];
			o++;
		}
	}
	int ans = 0;
	for (int i = 0; i < q / 2; i++) {
		if (s[i] != s[q - 1 - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
