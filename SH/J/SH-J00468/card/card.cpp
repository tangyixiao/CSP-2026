#include<bits/stdc++.h>
#define N 500005
#define M 300005
using namespace std;
int n,m,a[N],ans[M];
bool isin[M];//isin:索引数字在不在里面
int lstin[M];//lstin:上次这个数下标
//T4模拟56代码 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)//st 
	{
		memset(isin,0,sizeof(isin));
		memset(lstin,0,sizeof(lstin));
		for(int j=i;j<=n;j++)
		{
			if(!isin[a[j]])
			{
				isin[a[j]]=true;
				lstin[a[j]]=j;
			}
			else
			{
				for(int k=lstin[a[j]];k<=j;k++)
				{
					isin[a[k]]=false;
					lstin[a[k]]=0;
				}
				isin[a[j]]=true;
				lstin[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++)
		{
			ans[j]+=isin[j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
