#include <bits/stdc++.h>
using namespace std;

int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin.tie(0);
	cout.tie(0);
	
	long long n;
	cin >> n;
	string st;
	
	for (long long i = 0; i < n; i++) {
		long long num;
		char s;
		cin >> num >> s;
		for (long long j = 0; j < num; j++) {
			st += s;
		}
	}
	
	long long ans = 0;
	for (long long i = 0; i < st.size() / 2 + 1; i++) {
		if (st[i] != st[st.size() - i - 1]) ans += 1;
	}
	
	cout << ans;
	
	return 0;
}
