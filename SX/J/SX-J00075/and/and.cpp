#include <bits/stdc++.h>
//AKCSP
long long a[200005], n, m;
using namespace std;

string _bit(long long x) {
	string s = "";
	while (x) {
		s += (x % 2) + '0';
		x /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}

long long fan_bit(string x) {
	long long ans = 0, power = 1;
	for (int i = x.size() - 1; i >= 0; i--) {
		ans += power * (x[i] == '1');
		power *= 2;
	}
	return ans;
}

long long _and(long long x, long long y) {
	string ss1 = _bit(x), ss2 = _bit(y), ans = "";
	//reverse(ss1.begin(), ss1.end());
	//cout << x << " :" << ss1 << " " << y << " :" << ss2 << endl;
	for (int i = 0; i <= max(ss1.size(), ss2.size()) - 1; i++) {
		//cout << i << ":  ss1[i]:" << ss1[i] << " ss2[i]:" << ss2[i] << endl;
		if (ss1[i] == ss2[i]) {
			ans += '1';
		} else {
			ans += '0';
		}
		//cout << " ans=" << ans << endl;
	}
	//reverse(ans.begin(), ans.end());
	string yesans = "";
	bool flag = 1;
	for (int i = 0; i <= ans.size() - 1; i++) {
		//cout << ans[i] << " " << flag << endl;
		if (ans[i] == '0' && flag)
			continue;
		if (ans[i] != '0') {
			flag = 0;
		}
		yesans += ans[i];
	}
	//cout << "yesans:" << yesans << endl;
	return fan_bit(yesans);
}

bool cmp(long long x, long long y) {
	return x > y;

}/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	unsigned long long ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans = _and(ans, a[i]);
	}
	cout << ans;
	return 0;
}
