#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s, s1, s2, s3;
	int n, m;
	cin >> s >> s1 >> s2 >> s3;
	n = (s1[0] - '0') * 10 + (s1[1] - '0');
	m = (s3[0] - '0') * 10 + (s3[1] - '0');
	//cout << n << " " << m;
	if (s != s2) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	if (n != m) {
		cout << "000";
		return 0;
	}
	cout << 1;
	if ((s1[2] <= 'C' && s3[2] > 'C' ) || (s2[2] <= 'C' && s1[2] > 'C')) {
		cout << "00";
		return 0;
	}
	cout << 1;
	if ((int(s1[2]) - 1 == int(s3[2])) || (int(s1[2]) + 1 == int(s3[2])))
		cout << 1;
	else
		cout << 0;
	return 0;
}
