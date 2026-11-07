#include<bits/stdc++.h>
using namespace std;
long long n,a,pl=1,l=0,r,pll,plr,ans=0;
char c;
long long bg[200005];
long long ed[200005];
char st[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a>>c;
		bg[i]=pl;
		pl+=a;
		ed[i]=pl-1;
		st[i]=c;
	}
	pl--;
	r=pl;
	pll=1;
	plr=n;
	while(l<(pl/2))
	{
		l=min(ed[pll],(pl/2));
		while((pl-r+1)<l)
		{
			r=max(bg[plr],pl-l+1);
			if(st[plr]!=st[pll])
			{
				ans+=(ed[plr]-r+1);
			}
			ed[plr]=min(ed[plr],r-1);
			if(bg[plr]==r)
			{
				plr--;
			}
		}
		pll++;
	}
	cout<<ans;
	return 0;
} 
