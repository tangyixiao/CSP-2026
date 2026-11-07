#include <bits/stdc++.h>
using namespace std;
int n,a[200010],b[40][200010],c[40],m,tot;
bool f[200010];
struct ky{
	int xb,ne,la;
}d[200010];
void turn(int x)
{
	int y = a[x];
	for(int i = 0;i<=30;i++)
	{
		b[i][x]=y%2;
		y/=2;
	}
}
bool sx(int x)
{
	int y = 0;
	for(int k = d[0].ne;k!=0;k=d[k].ne)
	{
//		cout<<d[k].la<<" "<<d[k].ne<<" "<<d[k].xb<<endl;
		if(b[x][d[k].xb]==1)
		{
			y++;
		}
	}
//	cout<<y<<endl;
	if(y>=m)
	{
		for(int k = d[0].ne;k!=0;k=d[k].ne)
		{
			if(b[x][d[k].xb]==0)
			{
				d[d[k].la].ne=d[k].ne;
				d[d[k].ne].la=d[k].la;
			}
		}
		return 1;
	}
	return 0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		turn(i);
	}bool zzz = 1;
	int k;
	int ans,x=1;
	for(int i = 35;i>=0;i--)
	{
		for(int j = 1;j<=n;j++)
		{
//			cout<<b[i][j]<<" ";
			c[i]+=b[i][j];
		}
//		cout<<c[i]<<endl;
		if(zzz&&c[i]>=m)
		{
			
			k=i;
			for(int j = 1;j<=n;j++)
			{
				if(b[i][j])
				{
					f[j]=1;
					d[++tot].xb=j;
					d[tot-1].ne=tot;
					d[tot].la=tot-1;
				}
			}
			zzz=0;
		}
	}
//	cout<<k<<endl;
	d[tot].ne=0;
	for(int i = 1;i<=k;i++)x*=2;
	ans=x;
	for(int i = k-1;i>=0;i--)
	{
		x/=2;
		if(sx(i))ans+=x;
	}
	cout<<ans;
	return 0;
}
