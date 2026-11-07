#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if(a == c)
	{
		cout << "1";
		if(b[0] == d[0] && b[1] == d[1]) cout << "1";
		else cout << "0";
		if(((b[2] <= 'C' && d[2] <= 'C') || (b[2] > 'C' && d[2] > 'C')) && b[0] == d[0] && b[1] == d[1]) cout << "1";
		else cout << "0";
		char n = min(b[2],d[2]);
		char m = max(b[2],d[2]);
		if(b[0] == d[0] && b[1] == d[1] && ((n == 'A' && m == 'B') || (n == 'B' && m == 'C') || (n == 'D' && m == 'F'))) cout << "1";
		else cout << "0";
	}
	else cout << "0000";
	return 0;
}
