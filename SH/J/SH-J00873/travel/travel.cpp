#include <bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("travel.in" ,"r", stdin);
	freopen("travel.out" ,"w", stdout);
	string cr, sr, cx, sx;
	cin >> cr >> sr >> cx >> sx;
	if (cr == cx) 
	{
		cout << 1;
		string xr = sr.substr(0, 2), xx = sx.substr(0, 2);
		if (xr == xx)
		{
			cout << 1;
			char maxn = max(sr[2], sx[2]), minn = min(sr[2], sx[2]);
			if (((minn == 'A' || minn == 'B' || minn == 'C') && (maxn == 'A' || maxn == 'B' || maxn == 'C'))
			  || (minn == 'D' || minn == 'F') && (maxn == 'D' || maxn == 'F'))
			{
				cout << 1;
				if ((minn == 'A' && maxn == 'B') || (minn == 'B' && maxn == 'C') || (minn == 'D' && maxn == 'F')) cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000"; 
	}
	else cout << "0000";
	return 0;
}
