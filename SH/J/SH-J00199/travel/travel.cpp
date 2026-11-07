#include <bits/stdc++.h>
#define FILE(s) freopen(s".in","r",stdin), freopen(s".out","w",stdout)
#define DEBUG(s) freopen(s".err","w",stderr)
#define CloseFILE fclose(stdin), fclose(stdout)
#define CloseDEBUG fclose(stderr)
#define int long long
#define endl "\n"
using namespace std;

string s1, c1, s2, c2;
int ans1, ans2, ans3, ans4;

signed main() {
	FILE("travel"), DEBUG("travel");
	cin.tie(0) -> sync_with_stdio(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		ans1 = ans2 = ans3 = ans4 = 0;
	} else {
		ans1 = 1;
		if (s1.substr(0, 2) == s2.substr(0, 2)) {
			ans2 = 1;
			if ((s1[2]<='C'&&s2[2]<='C') || (s1[2]>='D'&&s2[2]>='D')) {
				ans3 = 1;
				if (s1[2]>='D'&&s2[2]>='D') ans4 = 1;
				else {
					if (s1[2] > s2[2]) {
						swap(s1, s2);
					}
					if (s1[2]+1 == s2[2]) ans4 = 1;
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4 << endl;
//	CloseFILE, CloseDEBUG;
	return 0;
} 
