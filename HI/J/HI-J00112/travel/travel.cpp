#include <bits/stdc++.h>
using namespace std;
long long c1,c2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int num1 = (int(s1[0] - '0')*10 + int(s1[1] - '0'));
	int num2 = (int(s2[0] - '0')*10 + int(s2[1] - '0'));
	
	
	if (c1 == c2) cout << 1;
	else cout << 0;
	
	
	int flag_3 = 1;
	if (num1  == num2 && c1 == c2) cout << 1;
	else cout << 0;
	
	
	if (num1 == num2 && c1 == c2 && (s1[2] <= 'C' && s1[2] >= 'A' &&s2[2] <= 'C' && s2[2] >= 'A') || (s1[2] <= 'D' && s1[2] >= 'F' &&s2[2] <= 'D' && s2[2] >= 'F'))
	{
		cout << 1;
		flag_3 = 0;
	}
	if (flag_3) cout << 0;
	
	
	int xy[6] = {-1,1,-1,1};
	int flag_2 = 1;
	
	if ((s1[2] <= 'C' && s1[2] >= 'A' &&s2[2] <= 'C' && s2[2] >= 'A') || (s1[2] <= 'D' && s1[2] >= 'F' &&s2[2] <= 'D' && s2[2] >= 'F') && c1 == c2)
	for (int i = 0 ; i < 4 ; i++)
	{
		char r = char(s1[2] - xy[i]);
		int r2 = num1 - xy[i];
		if (r == s2[2] && num1 == num2)
		{
			cout << 1;
			flag_2 = 0;
			break;
		}
		if (r2 == num2 && s1[2] == s2[2])
		{
			cout << 1;
			flag_2 = 0;
			break;
		}
	}
	
	if (flag_2) cout << 0;
	
	return 0;
}
