#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c, cc;
	string s, ss, tra = "0000";
	cin >> c >> s >> cc >> ss;
	if (c == cc)
	{
		tra[0] = '1';
		if (s[0] == ss[0] && s[1] == ss[1])
		{
			tra[1] = '1';
			if (((s[2] <= 'C' && ss[2] <= 'C') || (s[2] >= 'D' && ss[2] >= 'D')))
			{
				tra[2] = '1';
				if ((s[2]=='A'&&ss[2]=='B')||(s[2]=='B'&&ss[2]=='A')||(s[2]=='B'&&ss[2]=='C')||(s[2]=='C'&&ss[2]=='B')||(s[2]=='D'&&ss[2]=='F')||(s[2]=='F'&&ss[2]=='D'))
				{
					tra[3] = '1';
				}
			}
		}
	}
	cout << tra;
	return 0;
}
