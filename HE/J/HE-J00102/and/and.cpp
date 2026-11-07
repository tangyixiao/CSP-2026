#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
long long n,m;
int a[N],b[N];
int ans=0;
void dfs(int x,int y,int cnt)
{
	if(x>m)
	{
		ans=max(ans,cnt);
		return;
	}
	dfs(x+1,y,cnt);
	dfs(x+1,y-1,cnt&a[x]);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ma=0,cnt=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ma=max(ma,a[i]);
		cnt=cnt&a[i];
	}
	if(m==1)
	{
		cout<<ma;
		return 0;
	} 
	if(m==n)
	{
		cout<<cnt;
		return 0;
	}
	int mb;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			b[j]=a[i]&b[j];
			mb=max(ma,b[j]);
		}
	}
	if(m==2)
	{
		cout<<mb;
		return 0;
	}
	else dfs(0,m,1);
	cout<<ans;
	return 0;
}
