#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ans[5];
void solve() {
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[0] == c2[0] && c1[1] == c2[1]) {
		ans[0] = 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			ans[1] = 1;
			if (s1[2] - 'C' > 0 && s2[2] - 'C' > 0) ans[2] = 1;
			else if (s1[2] - 'C' <= 0 && s2[2] - 'C' <= 0) ans[2] = 1;
			if ((s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) && (s1[2] != 'C') && (s1[2] != 'D')) ans[3] = 1;
			else if((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) ans[3] = 1;
		}
	}
	for (int i = 0; i <= 3; i++) printf("%d", ans[i]);
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	solve();
	return 0;
}