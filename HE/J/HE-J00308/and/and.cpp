#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn=-1,ans=2147483647,b[200005],p,m1=-1;
bool f[200005];
void dfs(int p)
{
	if(p>m){ans=2147483647;
		for(int i=1;i<=m;i++)ans=ans and b[i];
		m1=max(ans,m1);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==0){
			b[p]=a[i];
			f[i]=1;
			dfs(p+1);
			f[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		maxn=max(maxn,a[i]);
	}
	if(m==n){
		for(int i=1;i<=n;i++)ans=ans and a[i];cout<<ans;return 0;
	}
	if(m==1)
	{
		cout<<maxn;return 0;
	}
	dfs(1);
	cout<<m1;
	return 0;
 } 
