#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,ans;
int a[200005][35],vis[200005];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int tot=0,x;
		cin>>x;
		while(x)
		{
			a[i][tot++]=x%2;
			x/=2;
		}
	}
	for(int i=31;i>=0;i--)
	{
		int ge=0;
		for(int j=1;j<=n;j++)
			if(!vis[j]&&a[j][i])
				ge++;
		if(ge<m)
			continue;
		else
		{
			ans+=pow(2,i);
			for(int j=1;j<=n;j++)
				if(!vis[j]&&(!a[j][i]))
					vis[j]=1;
		}
	}
	cout<<ans;
	return 0;
}
