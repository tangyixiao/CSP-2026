#include <bits/stdc++.h>
#define int long long
#define maxn 200010

using namespace std;

int n, m, a[maxn], q, p;
void solve () {
	int ans=-123456;
	for (int i=1; i<n; i++) {
		for (int j=i+1; j<=n; j++) {
			ans=max (ans, (a[i]&a[j]));
		}
	}
	cout<<ans<<'\n';
}
void solve2 () {
	
}

signed main () {
	
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		p=max (p, a[i]);
		if (i==1) q=a[i];
		else q=q&a[i];
		
	}
	if (m==1) {cout<<p<<'\n'; return 0;}
	if (m==n) {cout<<q<<'\n'; return 0;}
	if (m==2) solve ();
	if (m==n-1) solve2 ();
	
	return 0;
}//T3