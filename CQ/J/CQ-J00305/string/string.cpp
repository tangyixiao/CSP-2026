#include <bits/stdc++.h>
using namespace std;
long long n,x[200005],sum,l1,r1,ll,rr,tot,maxn,cnt;
char s[200005],d[1000005];
struct nnn
{
	long long l,r;
	char t;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>s[i];
		a[i].l=sum+1;
		sum+=x[i];
		a[i].r=sum;
		a[i].t=s[i];
		maxn=max(maxn,x[i]);
//		cout<<a[i].l<<" "<<a[i].r<<" "<<a[i].t<<endl;
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i].l<<" "<<a[i].r<<" "<<a[i].t<<endl;
//	}
	l1=1;
	r1=sum;
	ll=1;
	rr=n;
	if(n<=2000&&maxn<=50)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=x[i];j++)
			{
				d[++cnt]=s[i];
			}
		}
		for(int i=1;i<=(cnt+1)/2;i++)
		{
			if(d[i]!=d[cnt+1-i])
			{
				tot++;
//				cout<<i<<" "<<cnt+1-i<<endl;
			}
		}
		cout<<tot;
		return 0;
	}
	while(l1<r1)
	{
//		cout<<l1<<" "<<r1<<" "<<ll<<" "<<rr<<endl;
		while(rr>=1)
		{
			if(a[rr].l<=r1&&a[rr].r>=r1)
			{
				break; 
			}
			rr--;
		}
		while(ll<=n)
		{
			if(a[ll].l<=l1&a[ll].r>=l1)
			{
				break; 
			}
			ll++;
		}
		if(a[ll].t!=a[rr].t)
		{
			tot+=min(a[ll].r-l1+1,r1-a[rr].l+1);
		}
		l1=min(a[ll].r+1,sum-a[rr].l+2);
		r1=sum-l1+1;
	}
	cout<<tot;
	return 0;
}
