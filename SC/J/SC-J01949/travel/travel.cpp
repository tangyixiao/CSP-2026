#include <bits/stdc++.h>
using namespace std;
#define int long long
#define eb emplace_back
#define pii pair <int, int>
#define fi first
#define se second
string c1, s1, c2, s2;
signed main ()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
	{
		cout << "0000";
		return 0;
	}
	cout << "1";
	if (s1[0] == s2[0] and s1[1] == s2[1])
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if (s1[0] == s2[0] and s1[1] == s2[1])
	{
		if (s1[2] <= 'C' and s2[2] <= 'C')
		{
			cout << "1";
		}
		else if (s1[2] >= 'D' and s2[2] >= 'D')
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else
	{
		cout << "0";
	}
	if (s1[0] == s2[0] and s1[1] == s2[1])
	{
		if (s1[2] <= 'C' and s2[2] <= 'C')
		{
			if (s1[2] <= 'B' and s2[2] <= 'B')
			{
				cout << "1";
			}
			else if (s1[2] >= 'B' and s2[2] >= 'B')
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		else if (s1[2] >= 'D' and s2[2] >= 'D')
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else
	{
		cout << "0";
	}
	return 0;
}//8:41
//呃呃，差点打挂了（），11：12 
