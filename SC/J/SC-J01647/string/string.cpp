#include <bits/stdc++.h>
using namespace std;
int n,a[200020],q,p;
long long ans;
char c[200020];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	q=n;
	p=1;
	while(q!=p)
	{
		if(c[p]!=c[q])
		{
			if(a[p]>a[q])
			{
				a[p]-=a[q];
				ans+=a[q];
				q--;
			}
			else if(a[q]>a[p])
			{
				a[q]-=a[p];
				ans+=a[p];
				p++;
			}
			else
			{
				ans+=a[q];
				q--;
				p++;
				if(q==p-1) break;
			}
			
		}
		else
		{
			if(a[p]>a[q])
			{
				a[p]-=a[q];
				q--;
			}
			else if(a[q]>a[p])
			{
				a[q]-=a[p];
				p++;
			}
			else
			{
				q--;
				p++;
			}
		}
	}
	cout<<ans;
	return 0;
}