#include <bits/stdc++.h>
using namespace std;

long long num, ans;
int n;
int a[200005];
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> b[i];
		num += 1ll * a[i];
	}
	long long li = 1, ri = n, l = 0, r = 0;
	while(li != ri && num != 0) {
		if(l == 0) l = a[li];
		if(r == 0) r = a[ri];
		if(l >= r) {
			if(b[li] != b[ri]) ans += 1ll * r;
			num -= 1ll * 2 * r;
			ri--;
			l -= r;
			r = 0;
			if(l == 0) li++;
		}
		else {
			if(b[li] != b[ri]) ans += 1ll * l;
			num -= 1ll * 2 * l;
			li++;
			r -= l;
			l = 0;
			if(r == 0) ri--;
		}
		
	}
	cout << ans;
	return 0;
}
