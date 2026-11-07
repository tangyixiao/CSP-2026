#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ans = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {//同一节
		ans++;
		if (s1[0] == s2[0] and s1[1] == s2[1]) {//同一排
			ans++;
			//同一侧
			if ((s1[2] <= 'C' and s2[2] <= 'C') or (s1[2] >= 'D' and s2[2] >= 'D')) {
				ans++;
				char p1 = s1[2], p2 = s2[2];
				if (p1 > p2) {
					swap(p1, p2);
				}
				//相邻
				if ((p1 == 'A' and p2 == 'B') or (p1 == 'B' and p2 == 'C') or (p1 == 'D' and p2 == 'F')) {
					ans++;
				}
			}
		}
	}

	for (int i = 1; i <= 4; i++) {
		if (ans) {
			--ans;
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}
