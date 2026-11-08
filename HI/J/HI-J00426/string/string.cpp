#include <bits/stdc++.h>
using namespace std;
long long n;
string s = "";
int main() {
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin >> n;
	long long lens = 0,k = 0;
	for (int i = 1;i <= n;i ++) {
		long long a;
		char ch;
		cin >> a;
		cin >> ch;
		lens += a;
		for (int q = 1;q <= a;q ++) {
			s += ch;
			k ++;
		}
	}
	long long mid = (s.size() + 1) / 2;
	long long ans = 0;
	string s1,s2;
	if (s.size() % 2 != 0) {
		s1 = s.substr(0,mid - 1);
		s2 = s.substr(mid,s.size());
		long long b = 0,e = s2.size() - 1;
		while (b <= s1.size() and e >= 0) {
			if (s1[b] != s2[e]) {
				ans ++;
			}
			b ++;
			e --;
		}
	} else {
		s1 = s.substr(0,mid);
		s2 = s.substr(mid,s.size());
		long long b = 0,e = s2.size() - 1;
		while (b <= s1.size() and e >= 0) {
			if (s1[b] != s2[e]) {
				ans ++;
			}
			b ++;
			e --;
		}
	}
	cout << ans;
	return 0;
}
