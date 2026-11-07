#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
void dfs(int k,int t,int b)//k已经拾取，b正在走 
{
	if(k==m)
	{
		ans=max(ans,t);
		return ;
	}
//	cout<<t<<endl;
	if(b>n) return;
	dfs(k+1,t&a[b],b+1);
	dfs(k,t,b+1);
	return;
	
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=2000)
	{
	dfs(0,1024*1024*1024-1,1);
	cout<<ans;
	}
	else
	{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	
}