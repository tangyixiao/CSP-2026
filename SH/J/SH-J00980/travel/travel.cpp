#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int a[5];//同一节车厢、同一排、过道同一侧，相邻

bool check(string s1,string s2)
{
	if(s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')
	{
		if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
		{
			return 1;
		}
	}
	
	if(s1[2] == 'D' || s1[2] == 'E')
	{
		if(s2[2] == 'D' || s2[2] == 'E')
		{
			return 1;
		}
	}
}


int main()
{
	freopen("travel1.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		a[1] = 1;
		if(s1[0] == s2[0]&&s1[1] == s2[1])
		{
			a[2] = 1;
			
			if(check(s1,s2))
			{
				a[3] = 1;
				if(s1[2] == s2[2]+1 || s1[2] == s2[2] - 1)
				{
					if(s1[2] == 'C' && s2[2] == 'D' || s1[2] == 'D' && s2[2] == 'C')
					{
						a[4] = 0;
					}
					else
					{
						a[4] = 1;
					}
				}	
			}
		}
	}

	for(int i = 1;i <= 4;i++)
	{
		cout << a[i];
	}

return 0;
}

