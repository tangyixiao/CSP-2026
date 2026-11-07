#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n;
	string s = "";
	cin >> n;
	long long a[200005];
	char c[200005];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}

	bool flag = 0;
	long long len = s.size();
	long long ans = 0;
	for (int i = 0; i < n / 2; i++) {
		//if (s[i] == s[len - i])
		//flag = 1;
		//else
		//flag = 0;
		//if (s[i] != s[len - i])
		//ans++;
		if (c[i] != c[len - i - 1]) {
			ans += a[i];
		}
		if (c[i] == c[i + 1])
			flag = 1;
	}

	if (len % 2 != 0)
		ans--;
	if (flag) {
		cout << 0;
		return 0;
	}

	cout << ans;


	return 0;
}
