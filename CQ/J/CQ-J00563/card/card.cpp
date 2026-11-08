#include<bits/stdc++.h>
using namespace std;
namespace did
{
	const int N=5e5+5,M=3e5+5;
	int a[N],h[N],q[M],ans[M];
	bool flag[M];
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
			h[q[a[i]]]=i;
			q[a[i]]=i;
		}
		if(n>5000)
		{
			if(m==1) {cout<<n<<" ";return 0;}
			if(m>3000)
			{
				for(int i=1;i<=n;i++)
				{
					if(a[i]!=a[i+1]) ans[i]=i;
				}
				for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
				return 0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			memset(flag,0,sizeof(flag));
			int p=i;
			while(p<=n)
			{
				while(h[p]!=0) p=h[p];
				flag[a[p]]=1;
				p++;
			}
			for(int i=1;i<=m;i++) if(flag[i]) ans[i]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	}
}
int main()
{
	did::main();
	return 0;
}
