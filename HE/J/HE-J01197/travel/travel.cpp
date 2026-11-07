#include <bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> cr >> sr >> cx >> sx;
	int ans = 0;
	if(cr == cx)
	{
		cout << '1';
	}
	else
	{
		cout << '0';
		ans = 1;
	}
	if(sr[0] == sx[0] && sr[1] == sx[1])
	{
		if(ans == 0)
		{
			cout << '1';
		}
		else
		{
			cout << '0';
		}
		if(sr[2] == 'A' && sx[2] == 'B'||sr[2] == 'B' && sx[2] == 'A' || sr[2] == 'B' && sx[2] == 'C' || sr[2] == 'C' && sx[2] == 'B' || sr[2] == 'A' && sx[2] == 'C' || sr[2] == 'C' && sx[2] == 'A' || sr[2] == 'D' && sx[2] == 'E' || sr[2] == 'E' && sx[2] == 'D')
		{
			if(ans == 0)
			{
				cout << '1';
			}
			else
			{
				cout << '0';
			}
		}
		else
		{
			cout << '0';
			ans = 1;
		}
	}
	else
	{
		cout << '0' << '0';
		ans = 1;
	}
	if(sr[2] == 'A' && sx[2] == 'B'||sr[2] == 'B' && sx[2] == 'A' || sr[2] == 'B' && sx[2] == 'C' || sr[2] == 'C' && sx[2] == 'B'|| sr[2] == 'D' && sx[2] == 'E' || sr[2] == 'E' && sx[2] == 'D')
	{
		if(ans == 0)
		{
			cout << '1';
		}
		else
		{
			cout << '0';
		}
	}
	else
	{
		cout << '0';
	}
	return 0;
}
