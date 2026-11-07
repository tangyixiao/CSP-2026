#include <bits/stdc++.h>
using namespace std;
char ans[5];

int main() {
	freopen("in.travel", "r", stdin);
	freopen("out.travel", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	for (int i = 1; i <= 4; i++)
		ans[i] = '0';
	if (c1 == c3) {
		ans[1] = '1';
		if (c2[0] == c4[0] && c2[1] == c4[1]) {
			ans[2] = '1';
			if (c2[2] >= 'A' && c2[2] <= 'C' && c4[2] >= 'A' && c4[2] <= 'C' || c2[3] >= 'D' && c2[2] <= 'E' && c4[2] >= 'D'
			        && c4[2] <= 'E') {
				ans[3] = '1';
				int o = abs(c2[2] - c4[2]);
				if (o == 1)
					ans[4] = '1';
				else
					ans[4] = '0';
			} else
				ans[3] = '0';
		} else
			ans[2] = '0';
	} else
		ans[1] = '0';
	for (int i = 1; i <= 4; i++)
		cout << ans[i];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
