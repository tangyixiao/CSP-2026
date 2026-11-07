#include <bits/stdc++.h>
#define int long long
using namespace std;

string s, s1, s2;
int a[200005];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int time;
		char c;
		cin >> time >> c;
		a[i] = time;
		while (time--) s += c;
	}
	int ans = 0;
	for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
		if (s[i] != s[j]) {
			ans++; 
		}
	}
	cout << ans;
	return 0;
}
