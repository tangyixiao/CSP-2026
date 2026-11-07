#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
string s;
int x;
char ch;

int p[200010];

char c[200010];

int sum[200010];

int t;


void fp() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
}


signed main() {
	fp();
	
	int ans = 0;
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> p[i] >> c[i];
		sum[i] = sum[i - 1] + p[i];
	}
	
	int l = 1, r = n;
	
	while (l < r) {
//		cout << l << ' ' << p[l] << '\n';
//		cout << r << ' ' << p[r] << '\n';
		if (p[l] > p[r]) {
			if (c[l] != c[r])
				ans += p[r];
			p[l] -= p[r];
			r --;
			continue;
		}
		if (p[l] < p[r]) {
			if (c[l] != c[r])
				ans += p[l];
			p[r] -= p[l];
			l ++;
			continue;
		}
		if (p[l] == p[r]) {
			if (c[l] != c[r])
				ans += p[l];
			l ++, r --;
			continue;
		}
	}
	cout << ans;
	return 0;
}

/*
只改后面的即可？

双指针？
*/

// 来都来了，骗一手：froepen inxlude rp++s

/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/

/*

*/