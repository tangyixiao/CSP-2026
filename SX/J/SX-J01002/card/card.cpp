#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int a[N], ans[N], v[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, f = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	while (f <= n) {
		memset(v, 0, sizeof(v));
		string s = "";
		for (int i = f; i <= n; i++) {
			string ss = "";
			long long q = a[i];
			while (q > 0) {
				ss += q % 10 + '0';
				q /= 10;
			}
			if (s.find(ss) == -1)
				s += ss + " ";
			else {
				for (int j = s.find(ss); j < i; j++)
					s[j] = ' ';
				s += ss + " ";
			}
		}
		long long hh = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ' ')
				hh = hh * 10 + s[i] - '0';
			else {
				if (!v[hh]) {
					ans[hh]++;
					v[hh] = 1;
				}
				hh = 0;
			}
		}
		f++;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}