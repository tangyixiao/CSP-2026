#include <bits/stdc++.h>

using namespace std;

string c1, s1, c2, s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) {
		cout << "0000";
		return 0;
	}
	string t1 = s1.substr(0,2), t2 = s2.substr(0,2);
	if(t1 != t2) {
		cout << "1000";
		return 0;
	}
	char x1 = s1[2], x2 = s2[2];
	if((x1 <='C' && x2 > 'C') || (x1 > 'C' && x2 <= 'C')) {
		cout << "1100";
		return 0;
	}
	if(abs(x1 -x2) > 1) {
		cout << "1110";
		return 0;
	}
	cout << 1111;
	return 0;
}