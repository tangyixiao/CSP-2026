#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
char ch[N];
string str;
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> ch[i];
		for (int j = 0; j < a[i]; j++) {
			str[cnt + j] = ch[i];
		}
		cnt += a[i];
	}
	long long len = cnt / 2;
	if (cnt % 2 == 0) {
		long long ans = 0;
		for (int i = 0, j = cnt - 1; i < len, j >= len; i++, j--) {
			if (str[i] != str[j]) {
				ans++;
			}
		}
		cout << ans;
	}
	else {
		long long ans = 0;
		for (int i = 0, j = cnt - 1; i < len, j > len; i++, j--) {
			if (str[i] != str[j]) {
				ans++;
			}
		}
		cout << ans;
	}
	return 0;
}

