#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
	for(int i=0; i<s.size(); i++) {
		if(s[i] != s[s.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, ans = 0;
	string c, s;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a >> s;
		for(int j=0; j<a; j++) {
			c += s;
		}
	}
	if(check(c)) {
		cout << 0;
		return 0;
	}
	else {
		for(int i=0; i<ceil((c.size()*1.)/2); i++) {
			if(c[i] != c[c.size() - 1 - i]) {
				ans ++;
			}
		}
	}
	cout << ans;
	return 0;
}
