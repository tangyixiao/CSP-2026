#include <bits/stdc++.h>
using namespace std;
int c1,c2; 
string s1,s2;
map<char,bool> q;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	q['A'] = 0;
	q['B'] = 0;
	q['C'] = 0;
	q['D'] = 1;
	q['F'] = 1;
	if (c1 == c2)
	{
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1])
		{
			cout << 1;
			if (q[s1[2]] == q[s2[2]])
			{
				cout << 1;
				if (q[s1[2]] == 1)
				{
					cout << 1;
				}
				else if (abs(s2[2] - s1[2]) == 1)
				{
					cout << 1;
				}
				else
				{
					cout << "0";
				}
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
	}
	return 0;
} 