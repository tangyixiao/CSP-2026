#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
string s1, s2;
string dz(string s) {
	string a;
	for (int i = s.size() - 1; i >= 0; i--) {
		a += s[i];
	}
	return a;	
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	while (n--) {
		long long x;
		char a;
		cin >> x >> a;
		while (x--) {
			s += a;
		}
	} 
	long x = s.size();
	if (x % 2 == 0) {
		for (int i = 0; i < x / 2; i++) {
			s1 += s[i];
		}
		for (int i = x / 2; i < x; i++) {
			s2 += s[i];
		}
	}else {
		for (int i = 0; i < x / 2; i++) {
			s1 += s[i];
		}
		for (int i = x / 2 + 1; i < x; i++) {
			s2 += s[i];
		}
	}
	s2 = dz(s2);
	long long cnt = 0;
	for (int i = 0; i <= x / 2; i++) {
		if (s1[i] != s2[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
