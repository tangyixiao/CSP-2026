#include <bits/stdc++.h>
using namespace std;
#define ll long long
string l1, l2, r1, r2;
ll res[9] = {0,};
void output ()
{
	for (int i = 0; i < 4; i++)
	{
		cout << res[i];
	}
}
int main ()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//saved
	cin >> l1 >> l2 >> r1 >> r2;
	if (l1 != r1)
	{
		output();
		return 0;
	}
	res[0] = 1;
	if (l2[0]==r2[0]&&l2[1]==r2[1]) res[1]=1;
	else
	{
		output();
		return 0;
	}
	char x = l2[2], y = r2[2];
	if (x <= 'C' && y <= 'C')
	{
		res[2] = 1;
		if (abs(y-x) == 1)
		{
			res[3] = 1;
		}
	}
	else if (x > 'C' && y > 'C')
	{
		res[2] = 1;
		if (abs(y-x) == 2)
		{
			res[3] = 1;
		}
	}
	output();
	return 0;
}
