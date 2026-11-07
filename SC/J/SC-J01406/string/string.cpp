#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(false);
	cin.tie (nullptr);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	
	long long L = 0;
	string s;
	s += '1';
	for (int i = 0; i < n; i ++) {
		int a;
		char c;
		cin >> a >> c;
		
		L += a;
		s += string(a, c);
	}
	
//	cout << s;
	
	long long ans = 0;
	for (int i = 1; i <= L / 2; i ++) {
		if (s[i] != s[L + 1 - i]) {
			ans ++;
//			cout << "..." << i << ' ' << s[i] << ' '<< "...";
		}
	}
	
	cout << ans;
	return 0;
}