#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int lan[4] = {0};
	if(c1 == c2) {
		lan[0] = 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]) {
			lan[1] = 1;
			if((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F')) {
				lan[2] = 1;
				if(abs(s1[2] - s2[2]) == 1) {
					lan[3] = 1;
				}
			}
		}
	}
	for(int i = 0; i < 4; i++) cout << lan[i]; 
	return 0;
}