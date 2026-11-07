#include<bits/stdc++.h>
using namespace std;
int n,m,k,b[35],ans,t=1;
bool f[200005],a[200005][35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(f,0,sizeof f);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x,cnt=0;
		cin>>x;
		while(x)
		{
			a[i][cnt]=x%2;
			if(a[i][cnt])
				b[cnt]++;
			x/=2;
			cnt++;
		}
		k=max(k,cnt);
	}
	for(int i=1;i<k;i++)
		t*=2;
	for(int i=k-1;i>=0;i--)
	{
		if(b[i]<m)
		{
			t/=2;
			continue;
		}
		int flag=0;
		for(int j=1;j<=n;j++)
			if(!f[j]&&a[j][i])
				flag++;
		if(flag>=m)
		{
			ans+=t;
			for(int j=1;j<=n;j++)
				if(!f[j]&&!a[j][i])
					f[j]=1;
		}
		t/=2;
	}
	cout<<ans;
	return 0;
}
