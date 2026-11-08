#include<bits/stdc++.h>
using namespace std;
string a,ai,b,bi;
int aini,bini;
char ac,bc;
bool ainac,binac;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> ai >> b >> bi;
	if (a==b) cout << 1;
	else
	{
		cout << "0000";
		return 0;
	}
	aini = (ai[0]-'0')*10+(ai[1]-'0');
	bini = (bi[0]-'0')*10+(bi[1]-'0');
	ac = ai[2];
	bc = bi[2];
	if (aini == bini) cout << 1;
	else
	{
		cout << "000";
		return 0;
	}
	if (ac >= 'A' and ac <= 'C') ainac = 1;
	if (bc >= 'A' and bc <= 'C') binac = 1;
	if (ainac and binac) cout << 1;
	else if (!ainac and !binac) cout << 1;
	else
	{
		cout << "00";
		return 0;
	}
	if (!ainac) cout << 1;
	else
	{
		if (ac == 'B' or bc == 'B')
		{
			cout << 1;
		}
		else cout << 0;
	}
	return 0;
}
