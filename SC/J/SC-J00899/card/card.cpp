#include <bits/stdc++.h>
#define N 500005
#define M 300005
using namespace std;
int a[N],desk[N],ans[M];
bool appear[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int x=a[j];
			bool f=0;
			for(int k=1;k<=n;k++)
			{
				if(x==desk[k])
				{
					for(int l=k;l<=n;l++)
					{
						desk[l]=0;
					}
					desk[k]=x;
					f=1;
					break;
				}
			}
			if(!f)
			{
				for(int k=1;k<=n;k++)
				{
					if(desk[k]==0)
					{
						desk[k]=x;
						break;
					}
				}
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(desk[j]!=0)appear[desk[j]]=1;
		}
		for(int j=1;j<=m;j++)
		{
			ans[j]+=appear[j];
		}
		memset(appear,0,sizeof(appear));
	}
	for(int i=1;i<=m;i++)
	{
		cout << ans[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}