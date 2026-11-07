#include <bits/stdc++.h>
using namespace std;
int a, b, ans1, ans2, ans3, ans4, l;
char a1[5], b1[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a;
	scanf("%s", &a1[0]);
	cin >> b;
	scanf("%s", &b1[0]);
	l = 1;
	if (a != 01 && a != 16 && b != 01 && b != 16) {
		if (a == b) {
			ans1 = 1;
			for (int i = 0; i <= 1; i++) {
				if (a1[i] != b1[i])
					l = 0;
			}
			if (l == 1) {
				ans2 = 1;
				if (a1[2] == 'A') {
					if (b1[2] == 'B') {
						ans3 = 1;
						ans4 = 1;
					} else if (b1[2] == 'C') {
						ans3 = 1;
					}
				} else if (a1[2] == 'B') {
					if (b1[2] == 'A' || b1[2] == 'C') {
						ans3 = 1;
						ans4 = 1;
					}
				} else if (a1[2] == 'C') {
					if (b1[2] == 'B') {
						ans3 = 1;
						ans4 = 1;
					} else if (b1[2] == 'A') {
						ans3 = 1;
					}
				} else if (a1[2] == 'D') {
					if (b1[2] == 'F') {
						ans3 = 1;
						ans4 = 1;
					}
				} else if (a1[2] == 'F') {
					if (b1[2] == 'D') {
						ans3 = 1;
						ans4 = 1;
					}
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}