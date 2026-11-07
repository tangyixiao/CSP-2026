#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200005],l=1,r,ans,lid,rid,ljz,rjz;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		r+=a[i];
	}
	ljz=a[1];
	rjz=a[n];
	lid=1;
	rid=n;
	while(rid>lid)
	{
		if(rjz>ljz)
		{
			r-=ljz;
			l+=ljz;
			rjz-=ljz;
			if(c[lid]!=c[rid]) ans+=ljz;
			lid++;
			ljz=a[lid];
		}
		else if(rjz<ljz)
		{
			r-=rjz;
			l+=rjz;
			ljz-=rjz;
			if(c[lid]!=c[rid]) ans+=rjz;
			rid--;
			rjz=a[rid];
		}
		else
		{
			r-=rjz;
			l+=rjz;
			if(c[lid]!=c[rid]) ans+=rjz;
			rid--;
			lid++;
			rjz=a[rid];
			ljz=a[lid];
		}
		//cout<<l<<" "<<r<<" "<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
