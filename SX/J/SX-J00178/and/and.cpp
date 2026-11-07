#include <bits/stdc++.h>
using namespace std;
long long n, m, x[200005];
string a[200005];

void c(int xx, int i) {
	string s = "";
	while (xx) {
		if (xx % 2 == 1)
			s = s + "1";
		else
			s = s + "0";
		xx /= 2;
	}
	a[i] = s;
}

string cc(int xx) {
	string s = "";
	while (xx) {
		if (xx % 2 == 1)
			s = s + "1";
		else
			s =  s + "0";
		xx /= 2;
	}
	return s;
}

bool chk(int mm) {
	string s = cc(mm);
	int sum = 0, len = s.size(), cnt = 0, temp[52];
	for (int j = 0; j < len; j++) {
		if (s[j] == '1')
			temp[++cnt] = j;
	}
	for (int i = 1; i <= n; i++) {
		bool flag = 0;
		for (int j = 1; j <= cnt; j++) {
			int ttt = temp[j];
			if (a[i][ttt] != '1') {
				flag = 1;
				break;
			}
		}
		if (!flag)
			sum++;
		if (sum >= m) {
			return true;
		}
	}
	return sum >= m;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
		c(x[i], i);
	}
	sort(x + 1, x + n + 1);
	int mx = x[n - m + 1];
	for (int i = mx; i >= 1; i--) {
		if (chk(i)) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
