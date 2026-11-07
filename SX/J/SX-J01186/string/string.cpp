#include <bits/stdc++.h>
using namespace std;
int a[10005];
long long n, l = 0;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int num;
		string b;
		cin >> num >> b;
		a[int(b[0]) - 96] += num;
	}

	int ans = 0;
	if (n == 1)
		ans = 0;
	else {
		for (int i = 1; i <= 26; i++) {
			if (a[i] % 2 != 0) {
				ans += a[i] / 2;
			}
			if (a[i] == 1)
				ans++;

		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
