#include<bits/stdc++.h>
using namespace std;
int a[500005],dp[500005];
int n,m,ans=0;
void fun(int k,int sum,int x)
{
	if(k==n+1)
	{
		if(x==m) ans=max(ans,sum);
		return ;
	}
	fun(k+1,sum,x);
	if(sum==0) fun(k+1,a[k],x+1);
	else fun(k+1,sum&a[k],x+1);
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	fun(1,0,0);
	cout<<ans;
	return 0;
}

