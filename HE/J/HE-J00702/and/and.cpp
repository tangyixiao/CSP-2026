#include<bits/stdc++.h>
using namespace std;
const int N=2010;
int a[N],o[N];
int ans,d,c,k,q,w;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout)
	int n,m;
	cin>>n>>m;;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; ans=max(ans,a[i]);
	}
	if(m==1)
	{
		cout<<ans; return 0;
	}
	else if(m==2)
	{
	    ans=0;
	    for(int i=1;i<=n;i++)
	    {
		    d=a[i];
		    for(int j=i+1;j<=n;j++)
		    {
			    c=a[j]; k=0;
		    	while(d&&c)
		        {
			        o[++k]=(d&c);
			        d>>1;c>>1;
		        }
		        q=2,w=0;
		        if(o[1]==1) w=1;
		        for(int i=2;i<=k;i++)
		        {
			        if(o[i]==1) w=w+q;
			        else q*=2;
		        }
		        ans=max(ans,w);
		    }
	    }
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
	    c=a[1];
	    for(int i=2;i<=n;i++)
	    {
		    d=a[i]; k=0;
		    while(d&&c)
		    {
			    o[++k]=(d&c);
			    d>>1;c>>1;
		    }
		    q=2,w=0;
		    if(o[1]==1) w=1;
		    for(int i=2;i<=k;i++)
		    {
			    if(o[i]==1) w=w+q;
			    else q*=2;
		    }
		    cout<<c;
		    c=w;
	    }
	    cout<<c;
		return 0;
	}
	else cout<<ans;
	return 0;
}
