#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+5;
ll n, a, t, ans = 0, cnt;
char x;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> x;
		t += a;
		for (int j = cnt; j < cnt + a; j++)
			s[j] = x;
		cnt += a;
	}
	for (int i = 0; i < t / 2 ; i++) {
		for (int j = t - 1; j >= (t + 1) / 2; j--) {
			if (s[i] != s[j]) {
				s[j] = s[i];
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
