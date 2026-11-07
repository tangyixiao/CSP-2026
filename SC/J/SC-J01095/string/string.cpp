#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n;
int len[N];
char ch[N];
signed main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> len[i] >> ch[i];
	}
	int l = 1, r = n;
	int ans = 0;
	while (l <= r) {
		if (ch[l] == ch[r]) {
			if (len[l] < len[r]) {
				len[r] -= len[l];
				l++;
			} else if (len[l] > len[r]) {
				len[l] -= len[r];
				r--;
			} else {
				l++;
				r--;
			}
		} else {
			ans += min(len[l], len[r]);
			if (len[l] < len[r]) {
				len[r] -= len[l];
				l++;
			} else if (len[l] > len[r]) {
				len[l] -= len[r];
				r--;
			} else {
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}