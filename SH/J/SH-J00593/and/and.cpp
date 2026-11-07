#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[200010]={},b[200010][40]={},f[40]={},k[200010]={},l=1,o=0;
	cin >> n >> m;
	int c =1,d,e;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
		d = a[i];
		int g = a[i];
		c=1;
		e=0;
		while(g)
		{
			g/=2;
			c*=2;
			e++;
		}
		while(d)
		{
			if(d>=c)
			{
				f[e]++;
				b[i][e]=1;
				d-=c;
			}
			c/=2;
			e--;
		}
	}
	int h = -2;
	for(int i = 31;i>=0;i--)
	{
		if(f[i]>=m)
		{
			for(int j = 1;j<=n;j++)
			{
				if(b[j][i])
				{
					k[l]=a[j];
					l++;
				}
			}
			h = i-1;
			break;
		}
	}
	if(h==-2)
	{
		cout << 0;
		return 0;
	}
	int p = k[1];
	for(int i = l;i>=l-m;i++)
	{
		p=(p&k[i]);
	}
	cout<<p;
	
	return 0;
}
