#include <bits/stdc++.h>
#define int long long
#define maxn 200010

using namespace std;

int n, a[maxn], mai=-1;
char c[maxn];
bool flag=true;
void solve () {
	int ans=0, cnt=0;
	string s;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=a[i]; j++) {
			s[++cnt]=c[i];
		}
	}
	for (int i=1; i<=ceil (cnt*1.0/2.0); i++) {
		if (s[i]!=s[cnt-i+1]) ans++;
	}
	cout<<ans<<'\n';
}

signed main () {
	
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		mai=max (mai, a[i]);
		if (i>1 && c[i]!=c[i-1]) flag=false;
	}
	if (n==1 || flag) {cout<<0<<'\n'; return 0;}
	else solve ();
	
	return 0;
}//T2