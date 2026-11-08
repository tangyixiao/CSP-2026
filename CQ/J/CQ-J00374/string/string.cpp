#include<bits/stdc++.h>
using namespace std;
const int N=200500;
long long n,a[N],sum[N],asum[N],tot,ans;
pair<long long,long long>f[N],ff[N];
char s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		sum[i]=sum[i-1]+a[i];
	}
	long long k=lower_bound(sum+1,sum+1+n,sum[n]/2)-sum;
	if(sum[n]/2<sum[k])
	{
		a[n+1]=sum[k]-sum[n]/2;
		s[n+1]=s[k];
	}
	for(int i=n;i>=k;i--)
	{
		asum[i]=asum[i+1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(i<=k)
		{
			f[i].first=sum[i];
			f[i].second=i;
		}
		else
		{
			ff[++tot].first=asum[i];
			ff[tot].second=i; 
		}
	}
	if(a[n+1]!=0) ff[++tot]={asum[k+1]+a[n+1],n+1};
	sort(f+1,f+1+k);
	sort(ff+1,ff+1+tot);
	long long l=1,r=1,last=0;
//	cout<<k<<' '<<tot<<'\n';
	while(l<=k&&r<=tot)
	{
//		cout<<s[f[l].second]<<' '<<s[ff[r].second]<<'\n';
//		cout<<s[n+1];
		if(f[l].first>=ff[r].first)
		{
			if(s[f[l].second]!=s[ff[r].second]) ans+=ff[r].first-last;
			last=ff[r].first;
			r++;
		}
		else
		{
			if(s[f[l].second]!=s[ff[r].second]) ans+=f[l].first-last;
			last=f[l].first;
			l++;
		}
//		cout<<last<<' ';
	}
	cout<<ans;
	
	return 0;
}
