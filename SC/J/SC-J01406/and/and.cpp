#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(false);
	cin.tie (nullptr);
	
	freopen("and5.in", "r", stdin);
	freopen("and5.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	vector<long long> a(n);
	for (int i = 0; i < n; i ++) cin >> a[i];
	
	long long ans = -1e17;
	if (m == 1) {
		for (int i = 0; i < n; i ++) {
			ans = max(ans, a[i]);
		}
	} else if (m == 2){
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				long long t = (a[i] & a[j]);
				ans = max(ans, t);
			}
		}
	} else if (m == 3) {
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				for (int k = j + 1; k < n; k ++){
					long long t = (a[i] & a[j] & a[k]);
					ans = max(ans, t);
				}
			}
		}
	} else if (m == 4) {
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				for (int k = j + 1; k < n; k ++){
					for (int s = k + 1; s < n; s ++){
						long long t = (a[i] & a[j] & a[k] & a[s]);
						ans = max(ans, t);
					}
				}
			}
		}
	} else if (m == 5) {
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				for (int k = j + 1; k < n; k ++){
					for (int s = k + 1; s < n; s ++){
						for (int z = s + 1; z < n; z ++){
							long long t = (a[i] & a[j] & a[k] & a[s] & a[z]);
							ans = max(ans, t);
						}
					}
				}
			}
		}
	}
	
	cout << ans;
	return 0;
}