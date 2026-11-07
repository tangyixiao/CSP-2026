#include<bits/stdc++.h>//card
using namespace std;
const int N=5e5+100;
int a,b,c[N],d[N],e,f[N],g,h;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//ios::sync_with_atdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	if(a<=500 && b<=200)
	{
		for(int i=1;i<=a;i++)//枚举游戏轮数 
		{
			e=0;
			for(int j=1;j<=a;j++)//多测要清空 
			{
				d[j]=0;
			}
			for(int j=i;j<=a;j++)//枚举该轮游戏 
			{
				int p=-1;
				for(int k=1;k<=e;k++)//判断当前队列中有无重复出现的数字 
				{
					if(d[k]==c[j])
					{
						p=k;
						break;
					}
				}
				if(p==-1)
				{
					e++;
					d[e]=c[j];
				}
				else
				{
					e=p;
				}
			}
			for(int j=1;j<=e;j++)
			{
				int u=d[j];
				f[u]++;
			}
		}
		for(int i=1;i<=b;i++)
		{
			cout<<f[i]<<" ";
		}
		
		return 0;
	}
	int o=1;
	for(int i=1;i<a;i++)
	{
		if(c[i]>c[i+1])
		{
			o=0;
		}
	}
	if(o==1 && a<=5000)
	{
		for(int i=1;i<=a;i++)//枚举游戏轮数 
		{
			e=0;
			for(int j=1;j<=a;j++)//多测要清空 
			{
				d[j]=0;
			}
			for(int j=i;j<=a;j++)//枚举该轮游戏 
			{
				int p=-1;
				if(d[e]==c[j])
				{
					p=e;
				}
				if(p==-1)
				{
					e++;
					d[e]=c[j];
				}
				else
				{
					e=p;
				}
			}
			for(int j=1;j<=e;j++)
			{
				int u=d[j];
				f[u]++;
			}
		}
		for(int i=1;i<=b;i++)
		{
			cout<<f[i]<<" ";
		}
		
		return 0;
	}
	if(o==1)
	{
		for(int i=1;i<=a;i++)
		{
			int u=c[i];
			f[u]=max(f[u],i);
		}
		for(int i=1;i<=b;i++)
		{
			cout<<f[i]<<" ";
		}
		return 0;
	}

	return 0;
}
