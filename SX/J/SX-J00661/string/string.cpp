#include <bits/stdc++.h>

#define int long long
using namespace std;
const int N = 2e5+10;

int n;
char c[N];
int sum;
string s = " ";

int ans;

signed main() {
//
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	int a;
	bool flag = false;
	for (int i = 1; i <= n; i++) {

		cin >> a >> c[i];

		for (int j = 1; j <= a; j++) {

			s = s + c[i];

		}

	}

	for (int i = 1; i <= n; i++) {

		if (c[1] != c[i]) {

			flag = true;

		}

	}

	if (flag == false) {

		cout << 0;

		return 0;

	}

	int len = s.size();
//	cout << s;
//	cout << len;

	for (int i = 1; i <= len / 2; i++) {

		if (s[i] != s[len - i + 1]) {

//			cout << i;

			ans++;

		}

	}

	cout << ans;

	return 0;
}
