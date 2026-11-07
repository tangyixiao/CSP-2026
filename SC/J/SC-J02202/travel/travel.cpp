#include <bits/stdc++.h>
using i32 = int;
using i64 = long long;
using namespace std;
#define READ_FILE 1

string c1,s1,c2,s2;

i32 main() {
#if READ_FILE
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
#endif
	
	cin >> c1 >> s1 >> c2 >> s2;
	i32 ans1 = c1 == c2 ? 1 : 0;
	i32 ans2 = ans1 && s1[0] == s2[0] && s1[1] == s2[1] ? 1 : 0;
	i32 ans3 = ans2 && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) ? 1 : 0;
	i32 ans4 = ans3 && abs(s1[2] - s2[2]) == 1 ? 1 : 0;
	
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}