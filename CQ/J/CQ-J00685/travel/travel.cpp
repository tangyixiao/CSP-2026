#include<bits/stdc++.h>
#define ls (x << 1)
#define rs (x << 1 | 1)
#define PR pair<int, int>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N = 1e5 + 5;
const db EPS = 1e-6;
const int MOD = 998244353;
const ull P = 33550337;

string c1, s1, c2, s2;
string ans;
map<char, int> side;

inline void solve() {
	if (c1 != c2) return;
	ans += '1';
	if (s1.substr(0, 2) != s2.substr(0, 2)) return;
	ans += '1';
	char a = s1[s1.size() - 1], b = s2[s2.size() - 1];
	if (side[a] != side[b]) return;
	ans += '1';
	if (a > b) swap(a, b);
	if (a == 'A' && b == 'C') return;
	ans += '1';
	return;
}

int main() {
	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	side['A'] = 1;
	side['B'] = 1;
	side['C'] = 1;
	side['D'] = 0;
	side['F'] = 0;
	
	cin >> c1 >> s1 >> c2 >> s2;
	solve();
	while (ans.size() < 4) ans += '0';
	cout << ans;
	
	return 0;
}
