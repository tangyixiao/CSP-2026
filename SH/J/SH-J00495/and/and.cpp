#include<bits/stdc++.h>
using namespace std;
int a[200001][31],t,maxx,u[200001],n,m;
void er(int g)
{
	int i=30,d;
	while(g>0)
	{
		d=g%2;
		a[t][i]=d;
		g=g/2;
		i--;
	}
	a[t][i]=-1;
	t++;
}
void xuan(int x,int t)
{
	int j,k,an,ans=0;
	if(x==m)
	{
		j=30;
		while(j>=-1)
		{
			an=1;
			for(k=1;k<=m;k++)
			if(a[u[k]][j]==0)
			an=0;
	        else if(a[u[k]][j]==-1)
	        {
				j=-1;
				break;
			}
			if(j!=-1)
			{
				for(k=j+1;k<=30;k++)
				an=an*2;
				ans=ans+an;
			}
			j--;
		}
		if(ans>maxx)
		maxx=ans;
	}
	else
	{
		x++;
		for(k=t+1;k<n;k++)
		{
			u[x]=k;
			xuan(x,k);
		}
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		er(k);
	}
	xuan(0,-1);
	cout<<maxx;
	return 0;
}
