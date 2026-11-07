#include <bits/stdc++.h>
using namespace std;
string rc, rs, xc, xs;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rs >> xc >> xs;
	if (rc != xc)
	{
		cout << "0000";
		return 0;
	}
	cout << 1;
	if (rs[0] != xs[0] or rs[1] != xs[1])
	{
		cout << "000";
		return 0;
	}
	cout << 1;
	if ((rs[2] - 'C' - 0.5) * (xs[2] - 'C' - 0.5) < 0)
	{
		cout << "00";
		return 0;
	}
	cout << 1;
	if (rs[2] - xs[2] == 1 or rs[2] - xs[2] == -1) cout << 1;
	else cout << 0;
	return 0;
}
