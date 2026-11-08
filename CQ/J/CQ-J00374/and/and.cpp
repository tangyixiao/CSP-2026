#include<bits/stdc++.h>
using namespace std;
const int N=200500;
long long n,m,a[N],p[N][40],f[N],ans,tot;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int k=0,x=a[i];
		for(int j=30;j>=0;j--)
		{
			k=(1<<j);
			if(x>=k)
			{
				x-=k;
				p[i][j]=1;
			}
		}
	}
	for(int i=30;i>=0;i--)
	{
		int k=0;
		for(int j=1;j<=n;j++)
		{
			if(tot==0)
			{
				if(p[j][i]==1) k++;
			}
			for(int l=1;l<=tot;l++)
			{
				if(p[j][f[l]]==0) break;
				if(l==tot&&p[j][i]==1) k++;
			}
		}
//		cout<<k<<' ';
		if(k>=m)
		{
			ans+=(1ll<<i);
//			cout<<ans<<' ';
			f[++tot]=i;
		}
	}
	cout<<ans;
	
	return 0;
}
