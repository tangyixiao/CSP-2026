#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],b[300010],a1[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin >>a[i];
		a1[a[i]] = i;
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			b[a[j]]++;
			j = a1[a[j]];
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout <<b[i]<<' ';
	}
	return 0;
}
