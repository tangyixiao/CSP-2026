#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],ans[300005];
bool flag=true;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(i>1&&a[i]<a[i-1]) flag=false;
	}
	if(flag)
	{
		for(int i=1;i<=n;i++) ans[a[i]]=i;
		for(int i=1;i<=m;i++) cout << ans[i] << " ";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			int b[500005],t=0;
			for(int j=i;j<=n;j++)
			{
				for(int l=1;l<=t;l++)
				{
					if(b[l]==a[j])
					{
						t=l-1;
						break;
					}
				}
				t++;
				b[t]=a[j];
			}
			for(int j=1;j<=t;j++) ans[b[j]]++;
		}
		for(int i=1;i<=m;i++) cout << ans[i] << " ";
	}
	return 0;
}
