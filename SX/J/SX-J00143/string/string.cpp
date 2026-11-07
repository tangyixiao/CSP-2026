#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2 * 1e5+5;
string s = "";
ll n, ans = 0;

ll num[N];
char ss[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i] >> ss[i];
	}
	ll i = 1, j = n;
	while (1) {
		ll minn = min(num[i], num[j]);
		if (ss[i] != ss[j]) {
			ans += minn;
			num[i] -= minn;
			num[j] -= minn;
			if (num[i] <= 0) {
				i++;
			}
			if (num[j] <= 0) {
				j--;
			}
		} else {
			num[i] -= minn;
			num[j] -= minn;
			if (num[i] <= 0) {
				i++;
			}
			if (num[j] <= 0) {
				j--;
			}
		}
		if (i >= j)
			break;
	}
	cout << ans;
	return 0;
}
