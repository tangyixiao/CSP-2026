#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 200050
int c[N];
char s[N], ss[N];

signed main() {
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, z = 1, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> c[i] >> s[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= c[i]; ++j) {
			ss[z] = s[i];
			z++;
		}
	}
	z--;
	int zz = z;
	for (int i = 1; i <= zz / 2; ++i) {
		if (ss[i] != ss[z]) {
			cnt++;
		}
		z--;
	}
	cout << cnt;
	return 0;
}