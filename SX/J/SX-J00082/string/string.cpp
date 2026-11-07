#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s1;
	char s[2000005];
	long long n, l = 0, ans = 0;
	cin >> n;
	for (int i = 1; i <= n ; i++) {
		int a;
		cin >> a >> s1[0];
		while (a--) {
			s[l] = s1[0];
			l++;

		}

	}
	for (long long i = 0; i <= l / 2 ; i++) {
		if (s[i] != s[l - i - 1] )
			ans++;
	}
	cout << ans << endl;
}
