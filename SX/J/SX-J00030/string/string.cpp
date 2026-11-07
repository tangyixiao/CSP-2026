#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, num, ans = 0;
	string a, temp;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> num >> temp;
		while (num--)
			a += temp;
	}
	for (int i = 0, j = a.size() - 1; i < (a.size() + 1) / 2 && j >= (a.size() + 1) / 2; i++, j--) {
		if (a[i] != a[j]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}