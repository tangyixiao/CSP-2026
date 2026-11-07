#include<bits/stdc++.h>
using namespace std;
long long n, s[200005], cnt;
char c[200005];
long long ans, sum;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> c[i];
		sum += s[i];
	}
	cnt = n;
	for (long long i = 1; i <= (n + 1) / 2; i++) {
		while (s[i] > 0) {
			if (sum & 1 && i == (n + 1) / 2 && s[i] == 1) {
				break;
			}
			if (s[i] == s[cnt] && c[i] != c[cnt]) {
				ans += s[i];
				s[i] = 0, s[cnt] = 0;
			} else if (s[i] == s[cnt] && c[i] == c[cnt]) {
				s[i] = 0, s[cnt] = 0;
			} else if (s[i] != s[cnt] && c[i] == c[cnt]) {
				if (s[i] > s[cnt]) {
					s[i] -= s[cnt];
					s[cnt] = 0;
				} else {
					s[cnt] -= s[i];
					s[i] = 0;
				}
			}else if (s[i] != s[cnt] && c[i] != c[cnt]) {
				ans += min(s[i], s[cnt]);
				if (s[i] > s[cnt]) {
					s[i] -= s[cnt];
					s[cnt] = 0;
				} else {
					s[cnt] -= s[i];
					s[i] = 0;
				}
			}
			if (sum & 1 && i == (n + 1) / 2 && s[i] == 1) {
				break;
			}
			cnt--;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
