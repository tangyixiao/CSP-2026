#include<bits/stdc++.h>
using namespace std;
#define int long long
inline bool check(char a, char b) {
	bool f = 0;
	if(a == 'A' && b == 'B') f = 1;
	if(a == 'B' && b == 'C') f = 1;
	if(a == 'E' && b == 'F') f = 1;
	return f;
}
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool ok1 = 0, ok2 = 0, ok3 = 0;
	if(c1 == c2) {
		ok1 = 1;
		cout << 1;
	}
	else cout << 0;
	if(ok1 && s1[0] == s2[0] && s1[1] == s2[1]) {
		ok2 = 1;
		cout << 1;
	}
	else cout << 0;
	if(ok2 && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'E' && s2[2] >= 'E'))) {
		ok3 = 1;
		cout << 1;
	}
	else cout << 0;
	if(ok3 && (check(s1[2], s2[2]) || check(s2[2], s1[2]))) cout << 1;
	else cout << 0;
	return 0;
}