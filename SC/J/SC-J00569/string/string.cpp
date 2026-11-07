#include <bits/stdc++.h>
using namespace std;
int cnt;
long long t;
string s;
string a, b;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> t;
	while(t--) {
		long long n;
		char c;
		cin >> n >> c;

		for (int i = 0; i < n; ++i) {
			s += c;
		}
	}
	
	for (int i = 0; i < s.size() / 2; ++i) {
		a[i] = s[i];
	}
	int j = 0;
	for (int i = s.size(); i > s.size() / 2; --i) {
		
		b[j] = s[i];
		++j;
	}
	for (int i = 0; i < s.size() / 2; ++i) {
		if(a[i] != b[i]) cnt++;

	}

	cout << cnt;
	return 0;
}