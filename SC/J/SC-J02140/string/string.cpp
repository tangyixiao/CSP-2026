#include<bits/stdc++.h>
#define maxn 100000
#define ll long long
using namespace std;
ll a[maxn];
char c[maxn];

int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, cnt=0;
	cin >> n;
	string s;
	s+='0';
	for (ll i=1; i<=n; i++) {
		cin >> a[i] >> c[i];
		cnt+=a[i];
		for (int j=1; j<=a[i]; j++) {
			s+=c[i];
		}
	}
	ll ans=0;
	for (ll i=1; i<=cnt/2; i++) {
		if (s[i]!=s[cnt+1-i]) ans++;
	}
	cout << ans;
	
	
	
	
	return 0;
}