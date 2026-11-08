#include<bits/stdc++.h>
char c1[10], c2[10], s1[10], s2[10];
int pd = 1, pd1 = 1, pd2 = 1;
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[0] == c2[0] && c1[1] == c2[1]) {
		cout << 1;
	} else {
		cout << 0;
		pd2 = 0;
	}
	char w1[10], w2[10];
	w1[0] = s1[0];
	w1[1] = s1[1];
	w2[0] = s2[0];
	w2[1] = s2[1];
	if (w1[0] == w2[0] && w1[1] == w2[1] && pd2) {
		cout << 1;
	} else {
		cout << 0;
		pd1 = 0;
	}
	char k1 = s1[2], k2 = s2[2];
	if ((k1 <= 'C' && k2 <= 'C' || k1 >= 'D' && k2 >='D') && pd1) {
		cout << 1;
	} else {
		cout << 0;
		pd = 0;
	}
	if (abs(k1 - k2) == 1 && pd) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
