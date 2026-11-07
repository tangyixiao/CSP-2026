#include <bits/stdc++.h>
using namespace std;

#define int long long
int bel[1000];

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	bel[(int)'A'] = bel[(int)'B'] = bel[(int)'C'] = 1;
	bel[(int)'D'] = bel[(int)'F'] = 2;
	string mc1, ms1, mc2, ms2;
	cin >> mc1 >> ms1 >> mc2 >> ms2;
	if (mc1 != mc2) cout << "0000\n";
	else
	{
		cout << "1";
		if (ms1[0] != ms2[0] || ms1[1] != ms2[1]) cout << "000\n";
		else
		{
			cout << "1";
			if (bel[(int)ms1[2]] != bel[(int)ms2[2]]) cout << "00\n";
			else
			{
				cout << "1";
				if (abs((int)ms1[2] - (int)ms2[2]) <= 1) cout << "1\n";
				else cout << "0\n";
			}
		}
	}
	return 0;
}
//EZ
