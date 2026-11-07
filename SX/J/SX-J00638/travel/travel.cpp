#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool ans[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans[1] = 1;
		if ((s1[0] - '0') * 10 + (s1[1] - '0') == (s2[0] - '0') * 10 + (s2[1] - '0')) {
			ans[2] = 1;
			if (((s1[2] == 'B' || s1[2] == 'C' || s1[2] == 'A') && (s2[2] == 'B' || s2[2] == 'C' || s2[2] == 'A'))
			        || ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F'))) {
				ans[3] = 1;
				if (s1[2] == 'A' && s2[2] == 'B')
					ans[4] = 1;
				if (s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C'))
					ans[4] = 1;
				if (s1[2] == 'C' && s2[2] == 'B')
					ans[4] = 1;
				if (s1[2] == 'D' && s2[2] == 'F')
					ans[4] = 1;
				if (s1[2] == 'F' && s2[2] == 'D')
					ans[4] = 1;
			}
		}
	}
	cout << ans[1] << " " << ans[2] << " " << ans[3] << " " << ans[4];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
