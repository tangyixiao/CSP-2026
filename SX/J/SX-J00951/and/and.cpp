#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],b[N];
long long n,m,ans=LLONG_MIN;
void dfs(int x,int k)
{
	if(n-x+1<m-k)
		return;
	if(k==m)
	{
		long long s=b[1];
		for(int i=2;i<=k;i++)
			s=s&b[i];
		ans=max(ans,s);
		return;
	}
	dfs(x+1,k);
	b[k+1]=a[x];
	dfs(x+1,k+1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(1,0);
  	cout<<ans;
	return 0;
}