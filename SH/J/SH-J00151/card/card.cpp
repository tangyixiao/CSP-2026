#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],z[500010],i,j,l,c,c1,maxa,s[300010];
int main()
{
//	freopen("travel.in","/r",stdin);
//	freopen("travel.out","/w",stdout);
	cin>>n>>m;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]>maxa)
		{
			maxa=a[i];
		}
	}
	for(int b=1;b<=n;++b)
	{
		int n1=n;
		for(i=b-1;i<n1;++i)
		{
			for(j=0;j<l;++j)
			{
				if(a[i]==z[j])
				{
					l=j;
					c=1;
				}
			}
			if(c!=1)
			{
				z[l+1]=a[i];
			}
			++l;
			c=0;
//			for(j=0;j<l;++j)
//			{
//				cout<<z[j]<<" ";
//			}
//			cout<<endl;
			if(i==n1-1 and c1!=1)
			{
				i=0;
				n1=b;
				c1=1;
			}
		}
		for(i=0;i<l;++i)
		{
			++s[z[i]];
		}
		l=0;
		c1=0;
	}
	for(i=1;i<=maxa;++i)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}
