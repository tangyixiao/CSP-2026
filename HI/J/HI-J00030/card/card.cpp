#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],inni[300005];
bool inc[300005];
stack <int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++)
	{
		int nowc=1;
		for (int j = i-1;j > 0;j--) nowc++;
		while (nowc <= n)
		{
			if (inc[a[nowc]]==1)
			{
				while (!s.empty())
				{
					if (s.top()==a[nowc])
					{
						inc[a[nowc]]=0;
						s.pop();
						break;
					}
					inc[s.top()]=0;
					s.pop();
				}
			}
			inc[a[nowc]]=1;
			s.push(a[nowc]);
			nowc++;
		}
		for (int j = 1;j <= m;j++)
		{
			if (inc[j]) inni[j]++;
			inc[j]=0;
		}
		while (!s.empty()) s.pop();
	}
	for (int i = 1;i <= m;i++)
	{
		if (i != 1) cout << " ";
		cout << inni[i];
	}
	return 0;
}
