#include <bits/stdc++.h>
using namespace std;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int t;
	long long sum = 0;
	cin >> t;
	string s;
	while (t--) {
		int i;
		cin >> i;
		char a;
		cin >> a;
		while (i--) {
			s += a;
		}
	}
	for (int i = 0, j = s.size() - 1; i <= s.size() / 2, j >= s.size() / 2 ; i++, j--) {
		//	cout << s[i] << " " << s[j] << " " ;
		//	cout << i << " " << j << endl;
		if (s[i] != s[j]) {
			sum++;
		}
	}
	cout << sum ;
	return 0;
}
/*
2
1000000000 a
1000000000 b
*/
