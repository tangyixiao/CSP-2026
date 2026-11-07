#include<bits/stdc++.h>
using namespace std;
bool ans(char a, char b, int t) {
	if (t != 1)
		return 0;
	if (a == 'D' || b == 'D' || a == 'F' || b == 'F') {
		if ((a == 'D' && b == 'F') || (b == 'D' && a == 'F'))
			return 1;
		return 0;
	}
	return 1;
}
bool ans1(char a, char b, int t) {
	if (t != 1)
		return 0;
	if ((a == 'D' && b == 'F') || (b == 'D' && a == 'F'))
		return 1;
	if ((a == 'A' && b == 'C') || (b == 'A' && a == 'C'))
		return 0;
	return 1;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a, an, b, bn, t1 = 0, t2 = 0, t = 0;
	char as, bs;
	cin >> a >> an >> as >> b >> bn >> bs;
	if (a == b) {
		t1 = 1;
		cout << 1;
	} else cout << 0;
	if (an == bn && t1 == 1) {
		t2 = 1;
		cout << 1;
	} else cout << 0;
	if (ans(as, bs, t2)) {
		t = 1;
		cout << t;
	} else cout << 0;
	if (ans1(as, bs, t)) {
		cout << 1;
	} else cout << 0;
	return 0;
}