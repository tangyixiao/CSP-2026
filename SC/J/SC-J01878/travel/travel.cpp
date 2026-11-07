#include<bits/stdc++.h> 
using namespace std;

string c1, s1, c2, s2;
bool ans[10] = {false};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	s1 = '#' + s1;
	s2 = '#' + s2; 
	if (c1 == c2) {
		ans[1] = true;
	}
	if (c1 == c2) {
		bool ok = true;
		for (int i = 1; i <= 2; i ++ ) {
			if (s1[i] != s2[i]) ok = false;
		}
		ans[2] = ok;
	}
	if (c1 == c2 && ans[2]) {
		char a = s1[3], b = s2[3];
		if (a <= 'C' && b <= 'C' || a >= 'D' && b >= 'D') {
			ans[3] = true;
			if (abs((a - 'A') - (b - 'A')) == 1) ans[4] = true;
		}
	}
	for (int i = 1; i <= 4; i ++ ) {
		cout << ans[i];
	}
	cout << "\n";
	return 0;
}