#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int a;
string t;
int ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	while (n--) {
		cin >> a >> t;
		while (a--) {
			s = s + t;
		}
	}
	int L = s.size();
	int l = 0, r = L - 1;
	int w = L / 2;
	while (w--) {
		if (s[l] != s[r]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
//reverse
