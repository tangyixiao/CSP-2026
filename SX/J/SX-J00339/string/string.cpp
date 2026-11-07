#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, sum, cnt;
string s, s1, s2;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	while (n--) {
		ll a;
		string c;
		cin >> a >> c;
		for (int i = 1; i <= a; i++)
			s += c;
		sum += a;
	}
	if (sum % 2 == 1) {
		for (int i = 0; i < sum / 2; i++)
			s1 += s[i];
		for (int i = sum / 2 + 1; i < sum; i++)
			s2 += s[i];
	}
	if (sum % 2 == 0) {
		for (int i = 0; i < sum / 2; i++)
			s1 += s[i];
		for (int i = sum / 2; i < sum; i++)
			s2 += s[i];
	}
	for (int i = 0; i < sum / 2; i++) {
		if (s1[i] != s2[sum - i - 1])
			cnt++;
	}
	cout << s << "\n" << s1 << "\n" << s2 << "\n" << sum << "\n";
	cout << cnt;
	return 0;
}
