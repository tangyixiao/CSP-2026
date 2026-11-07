#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans[300010],n,m,a[500010];
vector<int> p[500010];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a[i]=x;
		p[x].push_back(i); 
	}
	for(int i=1;i<=n;i++)
	{
		int idx=i;
		while(idx<=n)
		{
			ans[a[idx]]++;
			for(auto g:p[a[idx]])
			{
				idx=g+1; 
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}

