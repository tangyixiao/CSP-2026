#include<bits/stdc++.h>
#define ll long long
#define maxn 100000
using namespace std;
ll a[maxn], t[maxn];

int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, m, maxx=-999999, maxt=-999999, maxtt=-99999;
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		t[a[i]]++;
		if (maxt<=t[a[i]]) {
			maxt=t[a[i]];
			maxtt=a[i];
		}
		
	}
	sort(a+1, a+1+n);
	if (m==1) {
		cout << a[n];
		return 0;
	}
	if (m==2) {
		for (int i=1; i<=n; i++) {
			for (int j=i+1; j<=n; j++) {
				maxx=max(maxx, a[i]&a[j]);
			}
		}
		cout << maxx;
		return 0;
	}
	int ans=a[n];
	for (int i=n; i>n-m; i--) {
		ans&=a[i];
	}
	if (maxt>=m && maxtt>ans) {
		cout << maxtt;
	} else {
		cout << ans;
	}

	return 0;
}