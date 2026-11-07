#include <bits/stdc++.h>
using namespace std;
int n, m[200005], sum;
char c[200005];
map<char, int>mp;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m[i] >> c[i];
		mp[c[i]]++;
	}
	for (char i = 'a'; i <= 'z'; i++) {
		if (mp[i] != 0) {
			sum++;
		}
	}
	if (sum == 1) {
		cout << "0";
	} else if (sum == 2) {
		int d = 0, f = 0;
		char t;
		t = c[1];
		for (int i = 1; i <= n; i++) {
			if (c[i] == t) {
				d += m[i];
			} else {
				f += m[i];
			}
		}
		cout << min(d, f);
	} else
		cout << m[n];
	return 0;
}
