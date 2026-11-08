#include <bits/stdc++.h>
using namespace std;

#define DEBUG
#define LOCAL

typedef long long int ll;

inline int f(char ch) {
	if (ch == 'A' || ch == 'B' || ch == 'C') {
		return 1;
	}
	
	return 2;
}

inline bool F(char c1, char c2) {
	if (c1 == 'A' && c2 == 'B') return 1;
	if (c1 == 'B' && (c2 == 'A' || c2 == 'C')) return 1;
	if (c1 == 'C' && c2 == 'B') return 1;
	if (c1 == 'D' && c2 == 'F') return 1;
	if (c1 == 'F' && c2 == 'D') return 1; 
	
	return 0; 
} 

inline void solve() {
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	if ((c1 == c2) && s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	if ((c1 == c2) && (s1[0] == s2[0] && s1[1] == s2[1]) && f(s1[2]) == f(s2[2])) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	if ((c1 == c2) && (s1[0] == s2[0] && s1[1] == s2[1]) && f(s1[2]) == f(s2[2]) && F(s1[2], s2[2])) {
		cout << 1;
	} else {
		cout << 0;
	}
}

int main(int argc, const char* argv[]) {
#ifdef LOCAL
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t = 1;
//	cin >> t;
	
	while (t --) {
		solve();
	}
	
	return 0;
} 
