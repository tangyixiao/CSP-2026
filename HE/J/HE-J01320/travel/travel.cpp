#include <bits/stdc++.h>
using namespace std;

signed main ()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string ac, az, bc, bz;
	cin >> ac >> az >> bc >> bz;
	if (ac == bc)
	{
		if (az[0] == bz[0] && az[1] == bz[1])
		{
			if ((az[2] <= 'C' && bz[2] <= 'C') || (az[2] > 'C' && bz[2] > 'C'))
			{
				if (abs((int)(az[2] - bz[2])) == 1) cout << "1111\n";
				else cout << "1110\n";
			}
			else cout << "1100\n";
		}
		else cout << "1000\n";
	}
	else cout << "0000\n";
	return 0;
}
