#include<bits/stdc++.h>
using namespace std;

long long n,m,a[300005],ma,vis[300005],k,oo,uu;
 
void dfs(long long x,long long step,long long ans,long long num)
{
	if(step==m)
	{
		ma=max(ans,ma);
//		cout<<ma<<"@!#$%^"<<"\n"<<"\n";
		return ;
	}
	for(long long i=x+1;i<=n;i++)
    {
    	
    	if(vis[i]==0)
    	{
    		vis[i]=1;
//    		cout<<ans<<" "<<a[i]<<"\n";
    		num=ans;
    		ans=(ans&a[i]);
    		if(step==0)
            {
        	    ans=a[i];
				num=ans;
		    }
//		    cout<<ans<<" "<<a[i]<<"\n"<<"\n"; 
    		dfs(i,step+1,ans,num);
    		vis[i]=0;
    		ans=num;
		}
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for(long long i=1;i<=n;i++)
    {
    	scanf("%lld",&a[i]);
    	if(a[i]%2==0)
    	{
    		oo=1;
		}
		if(a[i]!=i-1)
		{
		    uu=1;
		}
	}
	if(m==1)
	{
		sort(a+1,a+1+n);
		printf("%lld",a[n]);
		return 0; 
	}
	if(m==n)
	{
		k=a[1];
		for(long long i=2;i<=n;i++)
		{
			k=(k&a[i]);
		}
		printf("%lld",k);
		return 0;
	}
	if(oo==0) 
    {
    	sort(a+1,a+1+n);
    	cout<<a[n-m+1];
    	return 0;
	}
	if(uu==0)
	{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	dfs(0,0,0,0);
	printf("%lld",ma);
}
