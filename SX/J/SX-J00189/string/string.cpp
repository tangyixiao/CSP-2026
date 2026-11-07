#include <bits/stdc++.h>
using namespace std;
int n;
int s[20000005];
char c[20000005];
int a[2000005];
long long ans;
char _, __;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.in", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (n == 1) {
			char c;
			cin >> c;
			cout << '0';
			return 0;
		}
	if (n == 2) {
		cin >> _ >> __;
		if (_ == __) {
			cout << '0';
			return 0;
		} else {
			cout << '1';
			return 0;
		}
	}

	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> c[i];
	}

	for (int i = 1; i <= n; i++) {
		s = s + c[i];
	}
	int len = s.size();
	for (int i = 1; i <= len; i++) {
		if (a[i] != (a[len + 1 - i]))
			ans++;
	}
	cout << ans;
	return 0;

}
