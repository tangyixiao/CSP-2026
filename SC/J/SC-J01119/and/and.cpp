#include<bits/stdc++.h>
using namespace std;
int a[100010],n,m,ans=0;
void dp(int k,int h,int cnt,int i)
{
	if(cnt==m)
	{
		ans=max(h,ans);
		return;
	}
	if(k+1>n)	return; 
	if(k+1!=i)
		dp(k+1,h&a[k],cnt+1,i);
	dp(k+1,h,cnt,i);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>=2000)
	{
		cout<<((n-1)>>1);
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	dp(1,a[i],0,i);
	cout<<ans;
	return 0;
}