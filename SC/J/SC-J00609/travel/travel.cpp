#include <bits/stdc++.h>
#define ll long long
#define Suika 0
#define rep(i, j, k) for(int i=j;i<=k;i++)
#define dow(i, j, k) for(int i=j;i>=k;i--)
using namespace std;
const int N = 2e5 + 10;
string c1, c2, s1, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(Suika);
	cin.tie(Suika); cout.tie(Suika);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			char k1 = s1[2] - 'A', k2 = s2[2] - 'A';
			if (k1 <= 2 && k2 <= 2) {
				cout << 1;
				if (abs(k1 - k2) == 1) cout << 1;
				else cout << 0;
			} else if (k1 > 2 && k2 > 2) {
				cout << 1;
				if (abs(k1 - k2) == 1) cout << 1;
				else cout << 0;
			} else cout << "00";
		} else cout << "000";
	} else cout << "0000";
	return Suika;
}
/*
02 01C 02 01D
*/