#include <bits/stdc++.h>
#define int long long
using namespace std;

int tr1, tr2, s1, s2;
string st1, st2;
bool ans1(0), ans2(0), ans3(0), ans4(0);

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> tr1 >> st1 >> tr2 >> st2;
	
	if (tr1 == tr2) ans1 = true;
	if (ans1 && st1[0] == st2[0] && st1[1] == st2[1]) ans2 = true;
	if (ans2 && ((st1[2] >= 'A' && st1[2] <= 'C' && st2[2] >= 'A' && st2[2] <= 'C') || (st1[2] >= 'D' && st1[2] <= 'F' && st1[2] >= 'D' && st1[2] <= 'F'))) ans3 = true;
	if (ans3 && ((st1[2] + 1 == st2[2]) || (st2[2] + 1 == st1[2]))) ans4 = true;
	
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}