#include<bits/stdc++.h>
using namespace std;
const int N=500010;
int a[N],b[N],c[N],st[N];
int n;
int m;
int cnt=1;
void sb(int x)
{
	if(cnt==1)
	{	
		c[1]=x;
		cnt++;
		return ;
	}
	for(int i=1;i<cnt;i++)
	{
		if(c[i]==x)
		{
			for(int j=i;j<cnt;j++)
			{
				c[j]=0;
			}
			c[i]=x;
			cnt=i+1;
			return ;
		}
	}
	c[cnt]=x;
	cnt++;
	return ;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			b[j-i+1]=a[j];
		}
		for(int j=1;j<=n-i+1;j++)
		{
			sb(b[j]);
		}
		for(int k=1;k<cnt;k++)
		{
			st[c[k]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<st[i]<<" ";
	}
	return 0;
}