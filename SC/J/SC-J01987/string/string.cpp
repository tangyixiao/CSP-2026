#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],len;
char c[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int l=1,lid=1,r=len,rid=n,yy1=0,yy2=0,ans=0;
	while(l<r)
	{
		if(a[lid]-yy1<a[rid]-yy2)
		{
			if(c[lid]!=c[rid]) ans+=(a[lid]-yy1);
			l+=(a[lid]-yy1);
			r-=(a[lid]-yy1);
			yy2+=(a[lid]-yy1);
			yy1=0;
			lid++;
		}
		else if(a[lid]-yy1>a[rid]-yy2)
		{
			if(c[lid]!=c[rid]) ans+=(a[rid]-yy2);
			l+=(a[rid]-yy2);
			r-=(a[rid]-yy2);
			yy1+=(a[rid]-yy2);
			yy2=0;
			rid--;
		}
		else
		{
			if(c[lid]!=c[rid]) ans+=(a[rid]-yy2);
			l+=(a[rid]-yy2);
			r-=(a[rid]-yy2);
			yy1=0;
			yy2=0;
			lid++;
			rid--;
		}
	}
	cout<<ans<<endl;
	return 0;
}