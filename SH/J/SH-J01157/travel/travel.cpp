#include <bits/stdc++.h>
using namespace std;
string cc1,ss1,cc2,ss2,ans;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> cc1 >> ss1 >> cc2 >> ss2;
	ans+=(cc1 == cc2)?"1":"0";
	if(ans[0] == '1')
	{
		ans+=(ss1[0] == ss2[0] && ss1[1] == ss2[1])?"1":"0";
	}
	else
	{
		ans+="0";
	}
	if(ans[1] == '0')
	{
		ans+="0";
	}
	else
	{
		if(ss1[2] == 'A')
		{
			if(ss2[2] == 'B' || ss2[2] == 'C')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'B')
		{
			if(ss2[2] == 'A' || ss2[2] == 'C')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'C')
		{
			if(ss2[2] == 'B' || ss2[2] == 'A')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'D')
		{
			if(ss2[2] == 'F')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'F')
		{
			if(ss2[2] == 'D')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
	}
	if(ans[1] == '0')
	{
		ans+="0";
	}
	else
	{
		if(ss1[2] == 'A')
		{
			if(ss2[2] == 'B')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'B')
		{
			if(ss2[2] == 'A' || ss2[2] == 'C')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'C')
		{
			if(ss2[2] == 'B')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'D')
		{
			if(ss2[2] == 'F')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
		if(ss1[2] == 'F')
		{
			if(ss2[2] == 'D')
			{
				ans+="1";
			}
			else
			{
				ans+="0";
			}
		}
	}
	cout << ans;
	return 0;
}
