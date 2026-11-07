#include <bits/stdc++.h>
using namespace std;
map<char, int> mp = {{'A', 1}, {'B', 1}, {'C', 1}, {'D', 2}, {'F', 2}};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		printf("1");
		if (s1.substr(0, 2) == s2.substr(0, 2)) {
			printf("1");
			if (mp[s1[2]] == mp[s2[2]]) {
				printf("1");
				if (abs(s1[2] - s2[2]) == 1 || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F')) printf("1");
				else printf("0");
			}
			else printf("00"); 
		} else printf("000");
	} else printf("0000");
	return 0;
}
