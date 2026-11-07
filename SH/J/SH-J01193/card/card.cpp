#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int bottle[300005],r[10005];
int lis[500005];
int n,m,d;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n>>m;
	for(int i=0;i<n;i++)
	{
		cin >> lis[i];
	}
	d=n;
	while(d>0)
	{
		for(int i=n-d;i<n;i++)
		{
			if(r[lis[i]]==1)
			{
				for(int i=1;i<=m;i++)
					r[i] = 0;
				r[lis[i]]=1;
			}
			else
			{
				r[lis[i]] = 1;
			}
		}
		for(int i=0;i<=m;i++)
		{
			bottle[i]+=r[i];
			r[i] = 0;
		}
		d--;
	}
	for(int i=1;i<=m;i++)
	{
		cout << bottle[i] << ' ' ; 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
