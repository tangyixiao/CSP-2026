#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int n,m;
int a[500005];
int b[500005];
int cnt[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int tot = 0;
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=tot;k++)
			{
				if(a[j]==b[k])
				{
					tot=k-1;
					break;
				}
			}
			b[++tot] = a[j];
		}
		for(int i=1;i<=tot;i++)
		{
			cnt[b[i]] ++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
 } 
