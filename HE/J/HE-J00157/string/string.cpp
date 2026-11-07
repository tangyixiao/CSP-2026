#include <bits/stdc++.h>
using namespace std;
// Tirck||Treat!
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	string s;
	cin >> n;
	
	for (int i = 1; i <= n; i ++) {
		int x;
		char c;
		cin >> x >> c;
		string temp(x, c);
		s += temp;
	}
	
	int l = 0, r = s.size() - 1, cnt = 0;
	while (l <= r) {
		if (s[l] != s[r]) cnt ++;
		r --;
		l ++;
	}
	cout << cnt;
	return 0;
} 
