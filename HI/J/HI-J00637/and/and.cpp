#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 2e5 + 5;

int n, m;
int a[N]; 
int cnt1, cnt2, qu1[N], qu2[N];
ll ans = 0;
 
int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		qu1[++cnt1] = a[i];
	}
	
	for (int i = 30; i >= 0; i--) {		
		for (int j = 1; j <= cnt1; j++) {
			if ((qu1[j] >> i) & 1) qu2[++cnt2] = qu1[j]; 
		}
		if (cnt2 >= m) {
			ans += 1ll << i;
			cnt1 = 0;
			
			for (int j = 1; j <= cnt2; j++) {
				qu1[++cnt1] = qu2[j];
			}
		}
		cnt2 = 0;
	}
	cout << ans;
}

