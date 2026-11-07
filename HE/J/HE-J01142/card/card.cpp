#include <bits/stdc++.h>
using namespace std;
const int N=500005,M=300005;
int a[N],pt[M],summ[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	for(int i=1;i<=n;i++)//游戏轮数 
	{
		memset(pt,0,sizeof pt);
		int ptk=1;
		for(int j=i;j<=n;j++)//放牌 
		{
			for(int q=1;q<=ptk;q++)//检查前面 
			{
				if(pt[q]==a[j])
				{
					for(int ij=q;ij<=ptk;ij++)
					{
						pt[ij]=0;
					}
					ptk=q;
					break;
				}
			}
			pt[ptk]=a[j];
			ptk++;
			
		}
		for(int j=1;j<=ptk;j++)
		{
			if(pt[j]>=n)	continue;
			summ[pt[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<summ[i]<<' ';
	}
	return 0;
}

