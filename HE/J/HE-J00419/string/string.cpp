#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,ans,l = 0;
char c[20198100];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++) {
		int k;
		char s;
		cin >> k >> s;
		for(int j = 1;j <= k;j++) c[++l] = s;
	}
	int ans = 0;
	for(int i = 1;i <= l;i++) {
		if(c[i] != c[l+1-i]) {
			c[i] = c[l+1-i];
			ans++;
		} 
	}
	cout << ans << '\n';
	return 0;
}
