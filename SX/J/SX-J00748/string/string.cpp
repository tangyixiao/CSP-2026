#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl "\n"
using namespace std;
const int M = 2e5+10;
int n;
ll a[M], sum, l, mid, ans;
char c[M];
string s = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	fast;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s = s + c[i];
		}
	}
	l = s.size() - 1;
	mid = l / 2;
	ans = mid;
	if (l % 2 == 0) {
		for (ll i = 1; i <= mid; i++) {
			if (s[mid - i] == s[mid + i]) {
				ans -= 1;
			} else {
				break;
			}
		}
	} else {
		ans++;
		for (ll i = 1; i <= mid + 1; i++) {
			if (s[mid - i + 1] == s[mid + i]) {
				ans -= 1;
			} else {
				break;
			}
		}
	}
	cout << ans;
	return 0;
}
