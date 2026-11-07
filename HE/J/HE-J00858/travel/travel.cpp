#include<bits/stdc++.h>
using namespace std;
string c11,c22,s11,s22;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c11 >> s11 >> c22 >> s22;
	if (c11 == c22)
	{
		cout << '1';
		if (s11[0] + s11[1] == s22[0] + s22[1])
		{
			cout << '1';
			if ((s11[2] == 'D' && s22[2] == 'F') || (s11[2] == 'F' && s22[2] == 'D') || (s11[2] == 'A' && s22[2] == 'B') || (s11[2] == 'B' && s22[2] == 'A') || (s11[2] == 'A' && s22[2] == 'C') || (s11[2] == 'C' && s22[2] == 'A') || (s11[2] == 'B' && s22[2] == 'C') || (s11[2] == 'C' && s22[2] == 'A'))
			{
				cout << '1';
				if (((abs(s11[2] - s22[2]) == 1)&& (s11[2] != 'D' || s22[2] != 'c')) && (s11[2] != 'C' || s22[2] != 'D'))
				{
					cout << '1';
				}
				else if ((s11[2] == 'D' && s22[2] == 'F') || (s11[2] == 'F' && s22[2] == 'D'))
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
