#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N];
char c[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]) a[i-1]+=a[i],i--,n--;
	}
	long long ans=0,l=1,r=n,m;
	while(l<=r)
	{
		if(c[l]==c[r])
		{
			m=min(a[l],a[r]);
			a[l]-=m;a[r]-=m;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}
		else
		{
			m=min(a[l],a[r]);
			ans+=m;
			a[l]-=m;a[r]-=m;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}
	}
	cout<<ans;
	return 0;
}
