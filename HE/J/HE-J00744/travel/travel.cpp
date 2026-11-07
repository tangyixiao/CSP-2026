#include<bits/stdc++.h>
using namespace std;

int rid, xid, rc, xc;
char rop, xop;
string r, x;

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> rid >> r >> xid >> x;
	rc = (r[0] - '0') * 10 + r[1] - '0';
	rop = r[2];
	xc = (x[0] - '0') * 10 + x[1] - '0';
	xop = x[2];
	if(rid == xid)
	{
		if(rc == xc)
		{
			if(max(rop, xop) <= 'C' || min(rop, xop) >= 'D') 
			{
				if(abs(rop - xop) == 1) cout << "1111" << endl;
				else cout << "1110" << endl;
			}
			else cout << "1100" <<endl;
		}
		else cout << "1000" << endl;
	}
	else cout << "0000" << endl;
	return 0;
 } 
