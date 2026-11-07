#include <bits/stdc++.h>
using namespace std;
int n,a;
string m,b;
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin >> n >> m >> a >> b;
	if(n == a)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if(m[0] == b[0] && m[1] == b[1])
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	if((m[2] == 'A' && b[2] == 'B') ||(m[2] == 'B' && b[2] == 'C') ||(m[2] == 'A' && b[2] == 'C') ||(b[2] == 'A' && m[2] == 'B') ||(b[2] == 'B' && m[2] == 'C') ||(b[2] == 'A' && m[2] == 'C') ||(m[2] == 'D' && b[2] == 'F') ||(m[2] == 'F' && b[2] == 'D') || (b[2] == 'D' && m[2] == 'F') ||(b[2] == 'F' && m[2] == 'D'))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if((m[2] == 'A' && b[2] == 'B') ||(m[2] == 'B' && b[2] == 'C') || (m[2] == 'D' && b[2] == 'F') ||(m[2] == 'F' && b[2] == 'D')||(b[2] == 'A' && m[2] == 'B') ||(b[2] == 'B' && m[2] == 'C') || (b[2] == 'D' && m[2] == 'F') ||(b[2] == 'F' && m[2] == 'D'))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
