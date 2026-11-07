#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int n, a;
int cnt;
int ssize;

struct sss {
	char ccc;
	int aaa;
} aa[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	ssize = s.size();
	for (int i = 0; i < ssize ; i++) {
		if (s[i] != s[ssize - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;

	/*aa[0].ccc = '*';
	aa[0].aaa = 1;
	for (int i = 1; i <= n; i++) {
		cin >> aa[i].aaa >> aa[i].ccc;
		if (aa[i].ccc == aa[i - 1].ccc ) {
			aa[i].aaa += aa[i - 1].aaa;
			aa[i - 1].aaa = 0;
		}

	}
	for (int i = 1; i <= n; i++) {
		if (aa[i].ccc == aa[n - i].ccc) {
			if (aa[i].aaa >= aa[n - i].aaa) {
				cnt += aa[i].aaa - aa[n - i].aaa;
				aa[n - i - 1].aaa -= aa[i].aaa - aa[n - i].aaa;
				aa[n - i].aaa += aa[i].aaa - aa[n - i].aaa;
			} else {
				cnt += aa[n - i].aaa - aa[i].aaa;
				aa[i + 1].aaa -= aa[n - i].aaa - aa[i].aaa;
				aa[i].aaa += aa[n - i].aaa - aa[i].aaa;
			}
		} else {
			cnt += min(aa[i].aaa, aa[n - i].aaa);
			if (aa[i].aaa > aa[n - i].aaa) {
				aa[n - i].ccc = aa[i].ccc;
				aa[i].aaa -= aa[i - n].aaa;
			}

		}
	}*/
	//cout << cnt;
	return 0;
}
