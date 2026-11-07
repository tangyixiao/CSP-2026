#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, c;
	string b, d;
	cin >> a >> b >> c >> d;
	int ans1, ans2, ans3, ans4;
	ans1 = ans2 = ans3 = ans4 = 0;
	if(a == c) {
		ans1 = 1;
		if(b[0] == d[0] and b[1] == d[1]) {
			ans2 = 1;
			if(b[2] >= 'A' and b[2] <='C' and d[2] >= 'A' and d[2] <= 'C') {
				ans3 = 1;
				if(abs(b[2] - d[2]) == 1) {
					ans4 = 1;
				}
				else {
					ans4 = 0;
				}
			}
			else if(((b[2] == 'D' or b[2] =='F') and (d[2] == 'D' or d[2] == 'F'))) {
				ans3 = 1;
				ans4 = 1;
			}
			else {
				ans3 = 0;
				ans4 = 0;
			}
		}
		else {
			ans2 = 0;
			ans3 = 0;
			ans4 = 0;
		}
	}
	else {
		ans1 = 0;
		ans2 = 0;
		ans3 = 0;
		ans4 = 0;
	}
	printf("%d%d%d%d", ans1, ans2, ans3, ans4);
	return 0;
}
