#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	string x;
	x = "";
	int cds;
	cds = s.size();
	for (int i = 0; i < cds; i++) {
		if (s[i] != ' ')
			x += s[i];
	}
	int xcd;
	xcd = x.size();
	string sz, zm, szf, zmf;
	sz = "";
	zm = "";
	szf = "";
	zmf = "";
	for (int i = 0; i < xcd; i++) {
		if (x[i] >= '0' && x[i] <= '9') {
			sz += x[i];
			szf += x[i];
		}
		if (x[i] >= 'a' && x[i] <= 'z') {
			zm += x[i];
			zmf += x[i];
		}
	}
	reverse(szf. begin(), szf.end());
	reverse(zmf. begin(), zmf.end());
	if (sz == sz && zm == zmf)
		cout << 0;
	return 0;
}