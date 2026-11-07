#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
long long fg[35];
long long a[200005];
long long ans=0;
long long ch(long long x,long long y)
{
	long long as,df;
	long long bnm=1;
	while (x>0 && y>0)
	{
		as=x%2;
		df=y%2;
		if (as==df && as==1) 
		{
			fg[bnm]=1;
		}
		bnm++;
		x/=2;
		y/=2;
	}
	long long op=0;
	for (int i=bnm-1;i>=1;i--)
	{
		op+=fg[i];
		op*=10;
	}
	op/=10;
	return op;
}
long long pow(long long k)
{
	long long hgf=1;
	for (int i=1;i<=k;i++) hgf*=10;
	return hgf;
}
long long dp(long long dj)
{
	if (dj==32)
	{
		if (dj<=1) return 0;
	    long long p[36],e[200005];
	    for (int i=1;i<=n;i++)
	    {
		    int ws=1,rts=0;;
		    while (ch(a[i],a[i])>ws)
		    {
			    ws*=10;
			    rts++;
		    }
		    p[rts]++;
		    e[i]=rts;
	    }
	    long long z=32;
	    for (int i=1;i<=32;i++)
	    {
		    for (int li=i+1;li<=32;li++)
		    {
			    p[i]+=p[li];
		    }
	    }
	    long long f[200005];
	    long long cnt=1;
	    while (p[z]<m || z>dj-1)
	    {
		    z--;
	    }
	    for (int i=1;i<=n;i++)
	    {
		    if (e[i]==z)
		    {
			    f[cnt]=i;
			    cnt++;
	 	    }
	    }
	    return pow(z-1)+dp(z-1);
	}
	else 
	{
		bool hk=1;
		for (int i=1;i<=cnt-1;i++)
		{
			if (f[i]/=pow(dj)%2==0) hk=0;
		}
		if (hk) return pow(dj-1)+dp(dj-1);
		else return dp(dj-1);
	}
	
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    if (m==1)
    {
    	for (int i=1;i<=n;i++)
    	{
    		ans=max(ans,ch(a[i],a[i]));
		}
	}
	else if (m==n)
	{
		ans=ch(a[1],a[1]);
		for (int i=2;i<=n;i++) 
		{
		    ans=ch(ans,a[i]);
		}
	}
	else 
	{
		ans=dp(30);
	}
	cout<<ans;
    return 0;
}