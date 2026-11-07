#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long h = 0,f = 0;
	int a[200005];
	char c[200005];
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i]>>c[i];
		h+=a[i];
	}
	int d=1,e=n;
	while(d<e)
	{
		if(a[d]<=a[e])
		{
			a[e]-=a[d];
			if(c[d]!=c[e])
			{
				f+=a[d];
			}
			a[d] = 0;
		}
		else
		{
			a[d]-=a[e];
			if(c[d]!=c[e])
			{
				f+=a[e];
			}
			a[e]=0;
		}
		if(a[d]==0)
		{
			d++;
		}
		if(a[e] == 0)
		{
			e--;
		}
	}
	cout<<f;
	return 0;
}
