#include<bits/stdc++.h>
using namespace std;
long long a[500005];
char c[500005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	long long l=1,r=n;
	long long cntl=a[1],cntr=a[n];
	ans+=(c[1]==c[n]?0:min(a[1],a[n]));
	while(l<r)
	{
		if(cntl<=cntr)
		{
			l++;
			if(c[l]!=c[r])
			{
				ans+=min(cntr-cntl,a[l]);
			}
			cntl+=a[l];
		}
		else
		{
			r--;
			if(c[l]!=c[r])
			{
				ans+=min(cntl-cntr,a[r]);
			}
			cntr+=a[r];
		}
	}
	cout<<ans;
	return 0;
}
