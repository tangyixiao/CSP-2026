#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int l[500005];
int ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >>m;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int t=1;t<=n;t++)
	{
		int top=0;
		for (int i=t;i<=n;i++)
		{
			for (int j=1;j<=top;j++)
			{
				if (l[j]==a[i])
				{
					top=j-1;
					break;
				}
			}
			l[++top]=a[i];
		}
		for (int i=1;i<=top;i++)
		{
			ans[l[i]]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout <<ans[i] <<' ';
	}
	return 0;
}
