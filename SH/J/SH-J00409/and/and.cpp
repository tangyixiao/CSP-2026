#include<bits/stdc++.h>
using namespace std;
long long arr[200010];
int n,m;
long long tans,ans;
void dfs(int l,int k)
{
	if(l==m)
	{
		ans=max(ans,tans);
		return ;
	}
	l++;
	for(int i=k+1;i<=n;i++)
	{
		long long k=tans;
		if(l==1) tans=arr[i];
		tans&=arr[i];
		dfs(l,i);
		tans=k;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	dfs(0,0);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
