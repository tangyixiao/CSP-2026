#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int rd() {
	int x = 0, f = 1;
	char ch = getchar();
	while(!isdigit(ch)) {
		if(ch == '-') f = -1;
		ch = getchar();
	}
	while(isdigit(ch)) {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}

const int N = 2e5 + 5;
int n, a[N];
string s, c;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	n = rd();
	for(int i = 1;i <= n;++ i) {
		a[i] = rd();
		cin >> c;
		while(a[i]){
			if(a[i] & 1LL) s += c;
			c += c;
			a[i] >>= 1LL;
		}
//		s += c;
	}
	int len = s.size() - 1, j = 0, l = 0, r = len;
	int ans = 0;
	while(l <= r) {
		if(s[l] != s[r]) ans ++;
		l ++;
		r --;
	}
	cout << ans << '\n';
	return 0;
}
