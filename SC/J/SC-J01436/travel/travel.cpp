#include<bits/stdc++.h>
using namespace std;
string c1, s1;
string c2, s2, ans;
int flag;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w" ,stdout);
	cin >> c1 >> s1;
	cin >> c2 >> s2;
	for(int i = 0;i<2;i++)
	{
		if(c1[i] != c2[i])
		{
			ans[0] = '0';
			flag = 1;
			break;
		}
	}
	if(flag == 0) ans[0] = '1';
	if(s1[0] == s2[0] && s1[1] == s2[1] && ans[0] == '1')
	{
		ans[1] = '1';
	}
	else ans[1] = '0';
	if(s1[2] >= 'A' && s1[2] <= 'C' && ans[0] ==  '1' && ans[1] == '1')
	{
		if(s2[2] >= 'A' && s2[2] <= 'C')
		{
			ans[2] = '1';
		}
		else 
		{
			ans[2] = '0';
		}
	}
	else
	{
		if(s2[2] >= 'D' && s2[2] <= 'F'&& ans[0] == ans[1] == '1')
		{
			ans[2] = '1';
		}
		else
			ans[2] = '0';
	}
	if(s2[2] - s1[2] == 1 || s1[2] - s2[2] == 1  )
	{
		if(ans[2] == '1')
			ans[3] = '1';
		else
		    ans[3] = '0';
	}
	else
		ans[3] = '0';
	for(int i = 0;i<4;i++)
	{
		cout << ans[i];
	}
	return 0;
 } 