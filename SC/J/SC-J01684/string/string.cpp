#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 200005
int n,l,r;
ll ans,a[maxn];
char c[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<=r)
	{
		if(a[l]<=a[r])
		{
			if(c[l]!=c[r])ans+=a[l];
			a[r]-=a[l];
			a[l]=0;
			l++;
		}
		else
		{
			if(c[l]!=c[r])ans+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}
	}
	cout<<ans;
	return 0;
}