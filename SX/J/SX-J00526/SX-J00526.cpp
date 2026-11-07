#include <bits/stdc++.h>
using namespace std;
string s1, s2, C1, C2;
char c1[5], c2[5];

bool pd[10] = {false};
int main() {
	cin >> c1 >> s1 >> c2 >> s2;
	int k1 = 0, k2 = 0;
	if (c1 == c2) {
		pd[1] = 1;
		k1 = s1.size();
		k2 = s2.size();
		bool sum = 1;
		if (k1 == k2) {
			for (int i = 1; i < k1; i++) {
				if (s1[i] <= '9' && s1[i] >= '0') {
					if (s1[i] == s2[i]) {
						sum = 0;
					}
				}

			}
			if (sum == 1) {
				pd[2] = 1;
				if ((s1[k1 - 1] = '1' || s1[k1 - 1] = '0') && (c1[k1 - 1] = 'A' || c2[k1 - 1] = )
			}
	}
}

return 0;
}
