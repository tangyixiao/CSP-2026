#include <bits/stdc++.h>
using namespace std;
//#define int long long
int n, a[200005], b, c, cnt;
//signed
string s, ss, sss;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> s;
		for (int j = 0; j < a[i]; j++) {
			ss += s;
		}
	}

	int l = ss.size();
	for (int i = l - 1; i >= 0; i--) {
		sss += ss[i];
	}

	if (ss == sss) {
		cout << "0";
		return 0;
	}
	for (int i = 0; i < l; i++) {
		if (ss[i] == sss[i])
			cnt++;

	}

	cout << (l - cnt) / 2;
	return 0;
}