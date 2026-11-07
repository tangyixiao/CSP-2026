#include <bits/stdc++.h>
using namespace std;
string s1, s2, s;
int cn, ans;
long long a[100005];
char c[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.in", "w", stdout);
	cin >> s;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];

	}
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
		cn += a[i];
	}
	for (int i = 1; i <= cn / 2; i++) {
		s1[i] = s[i];
	}
	if (cn % 2 == 0) {
		for (int i = 1; i <= cn / 2; i++) {
			s2[i] = s[n - i + 1];
		}
	} else {

		for (int i = 1; i <= cn / 2; i++) {
			s2[i] = s[n - i + 2];
		}
	}
	for (int i = 1; i <= cn / 2; i++) {
		if (s1[i] == s2[i])
			ans++;
	}
	cout << ans;

}