#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

const int N = 2e5 + 10;

int a[N], n;
char c[N];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++)
			s.push_back(c[i]);
	}

	s = " " + s;

	int L = s.size() - 1;

	cout << s << endl;

	ll cnt = 0;
	for (int i = 1; i <= L / 2; i++) {
		if (s[i] != s[L - i + 1]) {
			cnt++;
		}
	}

	cout << cnt << endl;
}
