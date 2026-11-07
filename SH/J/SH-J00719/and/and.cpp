#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
bool b[200005],c[200005];
bool check(int k)
{
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		c[i]=b[i]&&((a[i]>>k)&1);
		cnt+=c[i];
	}
	if(cnt<m)return false;
	for(int i=1;i<=n;i++)b[i]=c[i];
	return true;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=true;
	}
	for(int i=30;i>=0;i--)if(check(i))ans+=1<<i;
	cout<<ans;
	return 0;
}
