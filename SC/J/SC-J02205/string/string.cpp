#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s;
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char c;
		cin >> x >> c;
		for (int j = 1; j <= x; j++) s += c;
		sum += x;
	} 
	s = " " + s;
	if(sum % 2 == 1) {
		int ans = 0;
		string g, t;
		for(int i = 1; i <= sum / 2; i++) t += s[i];
		for(int i = sum / 2 + 2; i <= sum; i++) g += s[i];
		reverse(g.begin(), g.end());
		for(int i = 0; i < sum / 2; i++){
			if(g[i] != t[i]) ans++;
		}
		cout << ans;
	}
	if(sum % 2 == 0) {
		int ans = 0;
		string g, t;
		for(int i = 1; i <= sum / 2; i++) t += s[i];
		for(int i = sum / 2 + 1; i <= sum; i++) g += s[i];
		reverse(g.begin(), g.end());
		for(int i = 0; i < sum / 2; i++){
			if(g[i] != t[i]) ans++;
		}
		cout << ans;
	}
	return 0;
}