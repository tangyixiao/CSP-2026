#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5 + 5;

string c1, s1, c2, s2, res = "";

inline bool check(char a, char b) {
	int f1 = 0, f2 = 0;
	if (a <= 'C') f1 = 1;
	else f1 = 2;
	if (b <= 'C') f2 = 1;
	else f2 = 2;
	
	return f1 == f2;
}

inline bool check1(int x) {
	for (int i = 0; i < x; i++) if (res[i] != '1') return false;
	return true;
}

inline int zi(string a) {
	int x = 0;
	for (char c : a) x = x * 10 + c - '0';
	return x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2) res += '1';
	else res += '0';
	if (check1(1) && zi(s1.substr(0, 2)) == zi(s2.substr(0, 2))) res += '1';
	else res += '0';
	if (check1(2) && check(s1[2], s2[2])) res += '1';
	else res += '0';
	if (check1(3) && s1[2] == s2[2]) res += '1';
	else res += '0';
	
	cout << res << '\n';
	
	return 0;
}