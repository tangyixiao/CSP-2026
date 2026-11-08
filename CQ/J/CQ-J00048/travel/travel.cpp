#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int input() {
	int x;
	cin >> x;
	return x;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    map<char, int> m;
    m['A'] = m['B'] = m['C'] = 1, m['D'] = m['F'] = 2;
    int n1 = (s1[0] - '0') * 10 + (s1[1] - '0');
    int n2 = (s2[0] - '0') * 10 + (s2[1] - '0');
    if (c1 != c2) {
    	cout << "0000";
    	return 0;
	}
	if (n1 - n2) {
		cout << "1000";
		return 0;
	}
	if (m[s1[2]] - m[s2[2]]) {
		cout << "1100";
		return 0;
	}
	if (abs((s1[2] - 'A') - (s2[2] - 'A')) - 1) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}

