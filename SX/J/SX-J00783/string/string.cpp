#include <bits/stdc++.h>
using namespace std;

int n;
long long l = 1, r, ans ;

struct node {
	long long a;
	char c;
} s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
	}
	int ll = 1, lr = n;
	while (ll <= lr) {
		long long m = min(s[ll].a - l + 1, s[lr].a - r + 1 );
		char lt = s[ll].c, rt = s[lr].c;
		l += m;
		r += m;
		while (l >= s[ll].a)
			l -= s[ll++].a;
		while (r >= s[lr].a)
			r -= s[lr--].a;
		if (lt != rt)
			ans += m;
	}
	cout << ans;
	return 0;
}
