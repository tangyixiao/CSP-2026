#include <bits/stdc++.h>
using namespace std;
int n;
int t;
char m;
int cnt1, cnt2;

bool check(string x) {
	int l = 1;
	int r = x.size();
	while (l <= r) {
		if (x[l] != x[r])
			return false;
		l++;
		r--;
	}
	return true;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	string a = "";
	for (int i = 1; i <= n; i++) {
		cin >> t >> m;
		for (int j = 1; j <= t; j++) {
			a += m;
		}
	}
	if (!check(a)) {
		int l = 1;
		int r = a.size();
		for (int i = 1; i <= a.size(); i++) {
			while (l <= r) {
				if (a[l] != a[r]) {
					a[l] = a[r];
					cnt1++;
				}
				l++;
				r--;
			}
		}
		for (int i = 1; i <= a.size(); i++) {
			while (l <= r) {
				if (a[l] != a[r]) {
					a[r] = a[l];
					cnt2++;
				}
				l++;
				r--;
			}
		}
	} else
		cout << 0;
	return 0;
	cout << min(cnt1, cnt2);
	return 0;
}