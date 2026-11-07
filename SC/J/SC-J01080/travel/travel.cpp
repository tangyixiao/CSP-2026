#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int  ans[5];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans[0] = 1;
		if (s1[1] == s2[1]) {
			ans[1] = 1;
			if (s1[2] <= 'C' && s2[2] <= 'C') {
				ans[2] = 1;
				if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
					ans[3] = 1;
				}
			} else if (s1[2] > 'C' && s2[2] > 'C') {
				ans[2] = 1;
				if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
					ans[3] = 1;
				}
			}
		}
	}
	for (int i = 0; i <= 3; ++i) {
		printf("%d", ans[i]);
	}
	return 0;

}