#include <bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,seat1;
	string b,seat2;
	string ans = "0000";
	cin >> a >> seat1 >> b >> seat2;
	if (a == b)
	{
		ans[0] = '1';
		if (seat1[0] == seat2[0] && seat1[1] == seat2[1])
		{
			ans[1] = '1';
			if ((seat1[2] == 'A' || seat1[2] == 'B' || seat1[2] == 'C') && (seat2[2] == 'A' || seat2[2] == 'B' || seat2[2] == 'C') ) 
			{
				if ((seat1[2] == char(seat2[2]-1)) && seat1[2] != 'C' && seat2[2] != 'F')
				{
					ans[3] = '1';
					ans[2] = '1';
				}
				else if((seat1[2] == char(seat2[2]+1)) && seat1[2] != 'D' && seat1[2] != 'F')
				{
					ans[3] = '1';
					ans[2] = '1';
				}

			}
			else if ((seat1[2] == 'D' && seat2[2] == 'F') || (seat1[2] == 'F' && seat2[2] == 'D'))
			{
				ans[3] = '1';
					ans[2] = '1';
			
			}
			if ((seat1[2] == 'D' && seat2[2] == 'C') || (seat1[2] == 'C' && seat2[2] == 'D'))
			{
				ans[2] == 1;
				ans[3] == 0;

			}
			
		}
	}
	cout << ans;
	return 0;
 } 
