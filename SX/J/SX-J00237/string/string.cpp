#include <bits/stdc++.h>
using namespace std;

struct jj {
	long long a;
	char b;
} s[240000], b[240000];
long long n, num, sum[240000], p, ans1, ans2, sumb[240000];
char a[1000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	string h;
	for (int i = 1; i <= n; i++) {
		scanf("%lld%s", &s[i].a, &s[i].b);
		num += s[i].a;
		for (int j = 1; j <= s[j].a; j++) {
			a[p++] = s[i].b;
		}
	}
	//cout << num;
	int mid = num / 2 + 1;
	for (int i = 0; i < mid; i++) {
		if (s[h.size() - i - 1].b != s[i].b) {
			ans1++;
		}
	}
	cout << ans1;
	return 0;
}
