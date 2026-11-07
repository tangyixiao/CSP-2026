#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, d, e, f;
string s, t;
signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s >> d >> t;
	b = 10 * (s[0] - '0') + s[1] - '0', e = 10 * (t[0] - '0') + t[1] - '0';
	c = s[2] - 'A' + 1, f = t[2] - 'A' + 1;
	if (c == 6) c--;
	if (f == 6) f--;
	if (a != d) cout << "0000";
	else if (b != e) cout << "1000";
	else if (min(c, f) <= 3 && max(c, f) > 3) cout << "1100";
	else if (abs(c - f) > 1) cout << "1110";
	else cout << "1111";
	return 0;
}
//我常常追忆过去
//算了，不追忆了
//如追
//!?taerT||Treat?!
//想上迷惑行为大赏
//为什么到现在都还没有SH的迷惑行为大赏啊啊啊（悲 
