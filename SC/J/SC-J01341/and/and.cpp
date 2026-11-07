#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[2003];
int ans[2003][2003];
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	int sum = 0, ma = -1;
    int n, m;cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	ma = max(ma, a[i]);
    	sum = a[1];
	}
	for (int i = 2; i <= n; i++) {
    	sum &= a[i];
	}
	int mx = -1;
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
			    ans[i][j] = (a[i] & a[j]);
				if (ans[i][j] >= mx) {
					mx = ans[i][j];
				}	
			}
		}
	    cout << mx;
	} else if (m == 1) {
		cout << ma; 
	}else if (m == n){
		cout << sum;
	} else {
		cout << 0;
	}
	return 0;
}