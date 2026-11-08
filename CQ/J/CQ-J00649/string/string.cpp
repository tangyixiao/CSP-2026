#include<bits/stdc++.h>
using namespace std;
struct sb{
	long long a;
	char b;
}a[1000000];
long long b,c=1,d,f=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>b;
	d=b;
	for(long long e=1;e<=b;e++)
	{
		cin>>a[e].a>>a[e].b;
	}
	while(c!=d)
	{
		if(a[c].b!=a[d].b)
		{
			if(a[c].a<=a[d].a)
			{
				f+=a[c].a;
				a[d].a-=a[c].a;
				c++;
			}
			else
			{
				f+=a[d].a;
				a[c].a-=a[d].a;
				d--;
			}
		}
		else
		{
			if(a[c].a<=a[d].a)
			{
				a[d].a-=a[c].a;
				c++;
			}
			else
			{
				a[c].a-=a[d].a;
				d--;
			}
		}
	}
	cout<<f;
	return 0;
}
