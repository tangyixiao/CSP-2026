#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1 = 0, c2 = 0;
	string s1, s2;
	bool o1 = 0, o2 = 0, o3 = 0, o4 = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) o1 = 1;
	if (o1 == 1) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) o2 = 1;
		if (o2 == 1) {
			int a = 0, b = 0, ch1 = s1[2], ch2 = s2[2];
			if (ch1 == 'A' || ch1 == 'B' || ch1 == 'C') a = 0;
			else a = 1;
			if (ch2 == 'A' || ch2 == 'B' || ch2 == 'C') b = 0;
			else b = 1;
			if (a == b) o3 = 1;
			if (o3 == 1) if ((a == b) && abs((s1[2] - 'A') - (s2[2] - 'A')) == 1) o4 = 1; 
		}
	}
	cout << o1 << o2 << o3 << o4;
	return 0; 
}
