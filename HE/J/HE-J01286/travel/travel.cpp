#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freoprn("travle.out","w",stdout);
	string c1,c2,s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1 == s2) cout << "000";
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}else {
			cout << "00";
		}
	}
	else cout << "000";
	if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
		if (s1[0] == s2[0] && s1[1] == s2[1])
		if (max(s1[2],s2[2]) - min(s1[2],s2[2]) == 1) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
