#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
ll n, h;

struct st {
	ll x;
	string s;
} a[N];
string m, k;
ll l;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].s;
		h += a[i].x;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < a[i].x; j++) {
			m += a[i].s;
		}
	}
	for (int i = 0; i < h / 2; i++) {
		if (m[i] != m[h - i - 1])
			l++;
	}
	cout << l;
	return 0;
}