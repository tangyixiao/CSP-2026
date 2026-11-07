#include <bits/stdc++.h>
using namespace std;
long long n, q, h, cnt = 0, ans = 0;

struct opo {
	long long qq;
	char s;
};
opo zzq[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> zzq[i].qq >> zzq[i].s;
		cnt += zzq[i].qq;
		zzq[i].qq = zzq[i - 1].qq + zzq[i].qq;
	}
	q = 1;
	h = n;
	for (int i = 1; i <= cnt / 2; i++) {
		if (i > zzq[q].qq) {
			q++;
		}
		if (cnt - i + 1 == zzq[h - 1].qq) {
			h--;
		}
		if (zzq[q].s != zzq[h].s) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
