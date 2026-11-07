#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)

signed main() {
	freopen("travel.in", "w", stdin);
	freopen("travel.out", "r", stdout);
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	bool f1 = 0, f2 = 0, f3 = 0, f4 = 0;
	if (s1 == s3) {
		f1 = 1;
		string t1 = s2.substr(0, 2), t2 = s4.substr(0, 2);
		if (t1 == t2) {
			f2 = 1;
			if ((s2[2] == 'A' && s4[2] == 'B') || (s2[2] == 'B' && s4[2] == 'C') ||
			        (s2[2] == 'A' && s4[2] == 'C' ) || (s4[2] == 'A' && s2[2] == 'B') ||
			        (s4[2] == 'B' && s2[2] == 'C' ) || (s4[2] == 'A' && s2[2] == 'C') ||
			        (s2[2] == 'D' && s4[2] == 'F' ) || (s4[2] == 'D' && s2[2] == 'F')) {
				f3 = 1;
				if ((s2[2] == 'A' && s4[2] == 'B' ) || (s2[2] == 'B' && s4[2] == 'C' ) ||
				        (s4[2] == 'A' && s2[2] == 'B' ) || (s4[2] == 'B' && s2[2] == 'C' ) ||
				        (s2[2] == 'D' && s4[2] == 'F' ) || (s4[2] == 'D' && s2[2] == 'F'))
					f4 = 1;
			}
		}
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}