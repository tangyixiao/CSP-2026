#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;

int n, m, ans, a[N];

int main() {
	ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	
	if (m == 1) {
		for (int i = 1; i <= n; ++i) ans = max(ans, a[i]);
		cout << ans;
		return 0;
		
	} else if (n == m) {
		
		ans = a[1];
		for (int i = 2; i <= n; ++i) ans = (ans & a[i]);
		cout << ans;
		return 0;
		
	} else if (m == 2) {
		
		for (int i = 1; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) ans = max(ans, (a[i] & a[j]));
		}
		cout << ans;
		return 0;
		
	} else if (m == (n - 1)) {
		
		for (int i = 1; i <= n; ++i) {
			int sum;
			if(i == 1) sum = a[2];
			else       sum = a[1];
			for (int j = 1; j <= n; ++j) {
				if (j == i) continue;
				sum = (sum & a[j]);
			}
			ans = max(ans, sum);
		}
		cout << ans;
	}
}