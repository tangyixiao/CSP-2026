#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
	string s = "";
	int t;cin>>t;
	while (t--) {
		int n;cin>>n;
		char a;cin>>a;
		for (int i = 1;i <= n;i++) {
			s += a;
		}
	}
	LL ans = 0;
	for (int i = 0;i < (s.size()+1)/2;i++) {
		if (s[i] != s[s.size()-i-1]) ans++;
	}
	cout<<ans;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	while (T--) {
		solve();
	}
	fclose(stdin);fclose(stdout);
	return 0;
}