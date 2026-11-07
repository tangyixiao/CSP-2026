#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool flg1 = false, flg2 = false, flg3 = false, flg4 = false;
int get_sats(string s) {
	int rst = 0;
	rst += s[0] - '0';
	rst *= 10;
	rst += s[1] - '0';
	return rst;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) flg1 = true;
	if(flg1 && get_sats(s1) == get_sats(s2)) flg2 = true;
	if(flg2 && ((s1[2] >= 'A' && s1[2] <= 'C') == (s2[2] >= 'A' && s2[2] <= 'C'))) flg3 = true;
	if(flg3 && ((s1[2] + 1) == s2[2] || (s2[2] + 1) == s1[2])) flg4 = true;
	cout << flg1 << flg2 << flg3 << flg4 << '\n';
	return 0;
}