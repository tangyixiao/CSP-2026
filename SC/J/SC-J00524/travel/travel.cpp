#include <bits/stdc++.h>
using namespace std;
string s1r,s2r,s1x,s2x;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> s1r >> s2r >> s1x >> s2x;
	if (s1r != s1x)
	{
		cout << "0000";
	}
	else if (s2r.substr(0,2) != s2x.substr(0,2))
	{
		cout << "1000";
	}
	else if (!(((s2r[2] < 'D') && (s2x[2] < 'D')) || ((s2r[2] > 'C') && (s2x[2] > 'C'))))
	{
		cout << "1100";
	}
	else if (abs(s2r[2] - s2x[2]) > 1)
	{
		cout << "1110";
	}
	else
	{
		cout << "1111";
	}
	return 0;
}