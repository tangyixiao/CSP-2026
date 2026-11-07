#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200010],s,s1,s2,ans,ans1,f[200010],l=1;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=n;j++)
	{
		l=1;
		for(int i=1;i<=n;i++){
			f[i]=0;
		}
		for(int i=j;i<=n;i++)
		{
			f[a[i]]++;
			if(f[a[i]]%2==0)
				l=i;
		}
		for(int i=l;i<=n;i++)
		{
			if(a[i]==1) ans++;
			else ans1++;
		}
	}
	cout<<ans<<" "<<ans1;
	return 0;
}