#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, l, r) for(int i = l; i <= r; i++)
#define req(i, r, l) for(int i = r; i >= l; i--)
using namespace std;
int rd() {
	int res = 0, f = 1; char ch;
	while(!isdigit(ch)) { if(ch == '-') f = -1; ch = getchar(); }
	while(isdigit(ch)) { res = (res << 3) + (res << 1) + (ch ^ 48); ch = getchar(); }
	return res * f;
}
const int N = 2e5 + 8;
int n;
ll ans;
int a[N];
char c[N];
int na[N]; 
char nc[N];
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
	cin >> n;
	rep(i, 1, n) {
		cin >> a[i] >> c[i];
		na[n - i + 1] = a[i];
		nc[n - i + 1] = c[i];
	}
	int i = 1, j = 1;
	while(i <= n && j <= n) {
		if(a[i] > na[j]) ans += (c[i] != nc[j]) * na[j], a[i] -= na[j], j++;
		else ans += (c[i] != nc[j]) * a[i], na[j] -= a[i], i++;
	}
	cout << ans / 2;
	return 0;
}
/*
3
2 a
2 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/