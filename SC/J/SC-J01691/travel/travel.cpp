#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1, s2, s3, s4;
int ys[1005];
bool f1, f2, f3, f4;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	ys['A'] = ys['B'] = ys['C'] = 1;
	ys['D'] = ys['F'] = 2;
	if (s1 == s3) {
		f1 = 1;
		if (s2[0] == s4[0] && s2[1] == s4[1]) {
			f2 = 1;
			if (ys[(int)s2[2]] == ys[(int)s4[2]]) {
				f3 = 1;
				if (min(s2[2], s4[2]) + 1 == max(s2[2], s4[2])) {
					f4 = 1;
				}
			}
		}
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}