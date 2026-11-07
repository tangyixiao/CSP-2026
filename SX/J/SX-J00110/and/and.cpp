#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N = 2 * 1e5 + 10;
int a[N];

string two(int n) {	//µ¹Ðò
	string s;
	string sk = "0";
	if (n == 0)
		return sk;
	while (n != 0) {
		if (n % 2 == 1)
			s += '1';
		else
			s += '0';
		n /= 2;
	}
	return s;
}
int ans;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int sizen = -1;
	string str = "";
	for (int i = n - m; i <= n; i ++) {
		sizen = max(two(a[i]).size(), str.size());
		str = two(a[i]);
	}
	string s1 = two(a[n - m + 1]);
	if ((long long)s1.size() < sizen) {
		for (int i = s1.size(); i < sizen; i ++) {
			s1 += '0';
		}
	}
	for (int i = n - m + 1; i <= n; i ++) {
		string s2 = two(a[i]);
		if (s2.size() < sizen) {
			sizen = max(two(a[i]).size(), str.size());
		}
		for (int j = 0; j < sizen; j ++) {
			if (s1[j] == '1' && s2[j] == '1') {
				s1[j] = '1';
			} else {
				s1[j] = '0';
			}
		}
	}
	sizen --;

	for (int i = sizen; i >= 0; i --) {
		ans += pow(2, i) * (s1[i] - 48);
	}
	cout << ans;
	return 0;
}
