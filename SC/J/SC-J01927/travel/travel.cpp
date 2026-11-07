#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int a1, a2, i1, i2, i3, i4;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s1, s2;
	cin >> a1 >> s1 >> a2 >> s2;
	if (a1 == a2) {
		i1 = 1;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1] && i1 == 1) {
		i2 = 1;
	}
	if (((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) && i2 == 1) {
		i3 = 1;
	}
	if (i3) {
		if (s1[2] - 1 == s2[2] || s1[2] + 1 == s2[2] || s1[2] > 'C')i4 = 1;
	}
	cout << i1 << i2 << i3 << i4;
	return 0;
}