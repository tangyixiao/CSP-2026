#include <bits/stdc++.h>
using namespace std;
string a, b, c, d, nb, nd, mb, md;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) cout << 1;
	else
	{
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	nb += b[0];
	nb += b[1];
	mb += b[2];
	nd += d[0];
	nd += d[1];
	md += d[2];
	if (nb == nd)
	{
		cout << 1;
		if (((mb == "A" || mb == "B" || mb == "C") && (md == "A" || md == "B" || md == "C")) || ((mb == "D" || mb == "F") && (md == "D" || md == "F")))
		{
			cout << 1;
			if ((mb == "A" && md == "B") || (mb == "B" && md == "C") || (mb == "D" && md == "F")) cout << 1;
			else cout << 0;
		}
		else cout << 0 << 0;
	}
	else cout << 0 << 0 << 0;
	return 0;
} 
