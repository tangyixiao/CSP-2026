#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string n1, n2, m1, m2;
	cin >> n1 >> n2 >> m1 >> m2;
	int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
	if(n1 == m1) {
		ans1 = 1;
		if(n2[0] == m2[0] && n2[1] == m2[1]) {
			ans2 = 1;
			if((n2[2] == 'A' || n2[2] == 'B' || n2[2] == 'C') && (m2[2] == 'A' || m2[2] == 'B' || m2[2] == 'C') || (n2[2] == 'D' || n2[2] == 'F') && (m2[2] == 'D' || m2[2] == 'F')) {
				ans3 = 1;
				if(n2[2] == 'A' && m2[2] == 'B' || n2[2] == 'B' && (m2[2] == 'C' || m2[2] == 'A') || n2[2] == 'C' && m2[2] == 'B' || n2[2] == 'D' && m2[2] == 'F' || n2[2] == 'F' && m2[2] == 'D') {
					ans4 = 1;
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4 << "\n";
	return 0; 
}
