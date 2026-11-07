#include <bits/stdc++.h>
using namespace std;
signed main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s = "";
	cin >> n;
	for (int i = 1;i <= n;i ++) {
		int a;
		char b;
		cin >> a >> b;
		for (int i = 1;i <= a;i ++) {
			s += b;
		}
	}
	int len = s.size() , ans = 0;
	for (int i = 0;i < len;i ++) {
		if(s[i] == s[len - i - 1]) {
			ans ++;
		}
		
	}
	cout << (len - ans) / 2;
	return 0;
}
