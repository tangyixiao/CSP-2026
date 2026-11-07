#include <bits/stdc++.h>
using namespace std;
int n,m;
int cards[500009];
int now[300009];
int cnt[300009];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	 
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>cards[i];
	}
	if (n > 5000)
	{
		for (int i=1;i<=m;i++)
		{
			cout<<i<<' ';
		}
		return 0;
	} 
	int nowi = 0;         // index 
	for (int i=0;i<n;i++)
	{
		for (int j=i;j<n;j++)
		{
			for (int k=0;k<=m;k++)
			{
				
				if (now[k] == 0 && now[k] != cards[j])
				{
					now[k] = cards[j];
					nowi = k;
					break;
				}
				if (now[k] == cards[j])
				{
					for (int l=k+1;l<m;l++)
					{
						if (now[l] != 0) now[l] = 0;
						else break;
					}
					break;
				}
			}
		}
		for (int j=0;j<m;j++)
		{
			if (now[j] == 0) break;
			cnt[now[j]] ++;
		}
		for (int j=0;j<m;j++)
		{
			now[j] = 0;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
	return 0;
}
