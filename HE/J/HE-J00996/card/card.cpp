#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+50;
ll a[N],sum[N],ans1,ans2;
int n,m;
bool f1,f2;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(i>1)
		{
			if(a[i]<a[i-1]) f1=1;
			if(a[i]==a[i-1]) sum[a[i]]++;
		}
	}
	if(!f1)
	{
		for(int i=1;i<=m;++i)
		{
			ll ans=0;
			for(int j=1;j<=i;++j) ans+=sum[j];
			cout<<ans+i<<' ';
		}
		return 0;
	}
	int p1=0,p2=0;
	for(int i=1;i<=n;++i)
	{
		p1=a[i];
		for(int j=i+1;j<=n;++j)
		{
			if(a[j]==p1) p2=0;
			else p2=a[j];
		}
		if(p1==1||p2==1) ans1++;
		if(p1==2||p2==2) ans2++;
	}
	cout<<ans1<<' '<<ans2;
	return 0;
} 
