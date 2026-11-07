#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 2e5 + 3;
int n, a[N];
LL sum, ans;
char ch[N];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> ch[i];
		sum += (LL)a[i];
	}
	int l = 1, r = n;
	while (l < r) {
		if (a[l] == a[r]) {
			if (ch[l] == ch[r]) ;
			else ans += (LL)a[l];
			l++; r--;
		} else if (a[l] > a[r]) {
			if (ch[l] == ch[r]) ;
			else ans += (LL)a[r];
			a[l]-=a[r];
			r--;
		} else {
			if (ch[l] == ch[r]) ;
			else ans += (LL)a[l];
			a[r]-=a[l];
			l++;
		}
	}
	cout << ans;
	return 0;
}