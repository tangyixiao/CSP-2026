#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,ans,hh,l=1,r,q;
string s[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		sum+=a[i];
	}
	hh=sum/2;
	for(long long i=0;i<=hh;) 
	{
		if(l>=r)
		  break;
		if(s[l]==s[r])
		{
			q=min(a[l],a[r]);
			i+=q;
			a[l]-=q;
			a[r]-=q;
			if(a[l]==0)
		      l++;
		    if(a[r]==0)
		      r--;
		}
		else
		{
			q=min(a[l],a[r]);
			i+=q;
			ans+=q;
			a[l]-=q;
			a[r]-=q;
			if(a[l]==0)
		      l++;
		    if(a[r]==0)
		      r--;
		}
	}
	cout<<ans;
	return 0;
}