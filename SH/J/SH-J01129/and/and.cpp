#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool v[100005];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n,m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)scanf("%d", &a[i]);
	if(m==1)
	{
		int maxx=0;
		for(int i=1;i<=n;i++)maxx=max(maxx,a[i]);
		printf("%d", maxx);
		return 0;
	}
	if(m==n)
	{
		int ans;
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		printf("%d", ans);
		return 0;
	}
	if(m==2)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		printf("%d", ans);
		return 0;
	}
	m--;
	for(int k=1;k<=m;k++)
	{
		int maxxi=0,maxxj=0,maxx=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				if(!(v[i]||v[j]))
				{
					if(maxx<(a[i]&a[j]))
					{
						maxx=a[i]&a[j];
						maxxi=i;
						maxxj=j;
					}
				}
		v[maxxi]=1;
		v[maxxj]=1;
		a[++n]=maxx;
	}
	printf("%d", a[n]);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
