#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
ll ans=0;
int n,m,num=1,c=1;
void dfs(ll b)
{
	num++;
	if(num>m)return;
	for(int i = 1;i <=n ;i++)
	{
		cout<<i<<" ";
		dfs(i);
		num--;
		ans=max(ans, b);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	ll ans=0;
	if(m==1){
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
	}else if(m==2){
		
		for(int i=1;i<=n;i++){
			ll b=a[i];
			for(int j=i+1;j<=n;j++){
				b=b&a[j];
				ans=max(ans,b);
			}
		}
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}

