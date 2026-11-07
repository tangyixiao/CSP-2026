#include <bits/stdc++.h>
using namespace std;
int n,m,c,s[300005],p[500005];
int main()
{
	freofen("card.in".'w');
    freofen("card.out".'w');
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> p[i];
	}
	for (int i = 1;i <= n;i++)
	{
		int b[300005];
		vector<int> a;
		for (int j = i;j <= n;j++)
		{
			if (b[p[j]] == 0)
			{
				b[p[j]] = 1;
				a.push_back(p[j]);
			}
			else
			{
				while(1)
				{
					int t = a.front();
					a.pop_back();
					if (t == p[j])
					{
						break;
					}
				}
				a.push_back(p[j]);
			}
		}
		for (int k = 0;k < a.size();k++)
		{
			s[a[k]]++;
		}
	}
	
	for(int i = 1;i <= m;i++)
	{
		cout << s[i] << " ";
	}
	return 0;
} 