#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxn 200005
int n, a[maxn], ans;
string s, s1[maxn];
int cnt;
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s1[i];
		if(i > 1 && a[i] == a[i - 1]) cnt++;
	}
	if(cnt != n - 1){
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= a[i]; j++) s += s1[i];
		int len = s.length() - 1;
		for (int i = 0; i < len / 2; i++) if (s[i] != s[len - i]) ans++;
	}
	else {
		for(int i = 1;i <= n;i++) s += s1[i];
		for(int i = 0;i < n / 2;i++) if(s[i] != s[n - i]) ans++;
		ans *= a[1];
	}
	printf("%lld", ans);
}
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr), cout.tie(nullptr);
	solve();
	return 0;
}