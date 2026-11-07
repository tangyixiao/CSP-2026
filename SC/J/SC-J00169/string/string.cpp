#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+10;
int a[maxn],prea[maxn],sufa[maxn],n,l,sn,pn,ans;
char c[maxn],prec[maxn],sufc[maxn];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],l+=a[i];
	int cnt=0;
	for(pn=1;cnt<l/2;pn++)
	{
		prec[pn]=c[pn];
		if(cnt+a[pn]<l/2)prea[pn]=a[pn];
		else prea[pn]=l/2-cnt;
		cnt+=a[pn];
	}
	cnt=0;
	for(sn=1;cnt<l/2;sn++)
	{
		sufc[sn]=c[n+1-sn];
		if(cnt+a[n+1-sn]<l/2)sufa[sn]=a[n+1-sn];
		else sufa[sn]=l/2-cnt;
		cnt+=a[n+1-sn];
	}
	sn--,pn--;
//	cout<<pn<<endl;
//	for(int i=1;i<=pn;i++)cout<<prec[i]<<' '<<prea[i]<<endl;
//	cout<<sn<<endl;
//	for(int i=1;i<=sn;i++)cout<<sufc[i]<<' '<<sufa[i]<<endl;
	int i1,i2,ll=0,lr=0,lmx=0;
	for(i1=1,i2=1;i1<=pn&&i2<=sn;)
	{
		if(ll+prea[i1]<lr+sufa[i2])
		{
//			cout<<1<<' ';
			ll+=prea[i1];
			ans+=(prec[i1]==sufc[i2]?0:ll-lmx);
			lmx=ll;
			i1++;
//			cout<<ans<<endl;
		}
		else
		{
//			cout<<2<<' ';
			lr+=sufa[i2];
			ans+=(prec[i1]==sufc[i2]?0:lr-lmx);
			lmx=lr;
			i2++;
//			cout<<ans<<endl;
		}
	}
	cout<<ans;
	return 0;
}
