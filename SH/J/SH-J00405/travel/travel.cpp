#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a != c) cout << "0000\n";
	else
	{
		if (b[0] != d[0] || b[1] != d[1]) cout << "1000\n";
		else
		{
			if ((b[2] - 'C' <= 0 && d[2] - 'C' <= 0) || (b[2] - 'C' > 0 && d[2] - 'C' > 0))
			{
				if (abs(b[2] - d[2]) == 1) cout << "1111\n";
				else cout << "1110\n";
			}
			else
			{
				cout << "1100\n";
			}
		}
	}
	return 0;
}
