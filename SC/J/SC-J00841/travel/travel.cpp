#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 2e5+5, INF = 1e9;
string s1, s2;
int c1, c2;
int falg1, flag2;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (s1[2] - 'A' < 3) {
				falg1 = 1;
			}
			if (s2[2] - 'A' < 3) {
				flag2 = 1;
			}
			if (falg1 == flag2) {
				cout << 1;
				if (falg1 == 0) {
					cout << 1;
				} else {
					if (abs((s1[2] - 'A') - (s2[2] - 'A')) == 1) {
						cout << 1;
					} else {
						cout << "0";
					}
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}