#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else
	{
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1])
		cout << 1;
	else
	{
		cout << 0 << 0 << 0;
		return 0;
	}
	if (('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C') || ('D' <= s1[2] && s1[2] <= 'E'&& 'D'<= s2[2] && s2[2] <= 'E'))
		cout << 1;
	else
	{
		cout << 0 << 0;
		return 0;
	}
	if (('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C' && abs(s1[2] - s2[2]) == 1) || ('D' <= s1[2] && s1[2] <= 'E'&& 'D'<= s2[2] && s2[2] <= 'E'&& abs(s1[2] - s2[2]) == 1))
		cout << 1;
	else
		cout << 0;
	
	return 0;
}