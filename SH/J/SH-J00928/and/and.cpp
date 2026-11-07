#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],res;
long long ksm(long long b,int p)
{
	int ans=1;
	while(p>=1)
	{
		if(p%2==1)ans*=b;
		b=b*b;
		p/=2;
	}
	return ans*b;
}
long long dfs(int id,int cnt,long long ans)
{
	if(id<1)
	{
		if(cnt<m)return 0;
		return ans;
	}
	if(cnt==m)return ans;
	long long tmp1=dfs(id-1,cnt+1,ans&a[id]);
	long long tmp2=dfs(id-1,cnt,ans);
	return max(tmp1,tmp2);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<dfs(n,0,ksm(2,30)-1);
}
