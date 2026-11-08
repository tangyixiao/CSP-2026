#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 2e5 + 5;

int n, a[N];
char c[N];
ll pre[N], suf[N];

ll ans;
int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		pre[i] = pre[i - 1] + 1ll * a[i];
	}
	for (int i = n; i >= 1; i--) {
		suf[i] = suf[i + 1] + 1ll * a[i];
	}
	
	ll l = 1, r = 1;
	int id_l = 1, id_r = n;
	
	while (id_l <= id_r) {
		//cout << l << " " << r << "\n";
		
		ll left = pre[id_l] - l + 1, right = suf[id_r] - r + 1;
		
		if (left >= right) {
			r = suf[id_r] + 1;
			l += right;
			
			if (c[id_l] != c[id_r]) {
				ans += right; 
			}
			id_r--;
			if (l > pre[id_l]) {
				id_l++;
			}
		}
		else {
			l = pre[id_l] + 1;
			r += left;
			
			if (c[id_l] != c[id_r]) {
				ans += left;
			}
			id_l++;
			if (r > suf[id_r]) {
				id_r--;
			}
		}
	}
	cout << ans;
}

