#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M];
bool f[M];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			f[j]=false;
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]])
				for(int k=1;k<=m;k++)
					f[k]=false;
			f[a[j]]=true;
		}
		for(int j=1;j<=m;j++)
			if(f[j])
				ans[j]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
