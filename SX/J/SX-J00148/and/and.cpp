#include<bits/stdc++.h>
using namespace std;
int a[200005],arr[200005],n,m,mmax=INT_MIN;
void dfs(int step)
{
	if(step>m)
	{
		int x=a[arr[1]];
		for(int i=2;i<step;i++) x&=a[arr[i]];
		mmax=max(x,mmax);
		return;
	}
	for(int i=arr[step-1]+1;i<=n;i++)
	{
		arr[step]=i;
		dfs(step+1);
		arr[step]=0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<mmax;
	return 0;
}
