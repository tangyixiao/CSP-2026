#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1,c2,c3,c4;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1!=c3) cout << "0000";
	else
	{
		cout << "1";
		if(c2[0]!=c4[0]||c2[1]!=c4[1]) cout << "000";
		else
		{
			cout << "1";
			if(c2[2]>='D'&&c4[2]>='D') cout << "11";
			else if(c2[2]<='C'&&c4[2]<='C')
			{
				cout << "1";
				if(c2[2]+1==c4[2]||c4[2]+1==c2[2]) cout << "1";
				else cout << 0;
			}
			else cout << "00";
		}
	}
	return 0;
} 
