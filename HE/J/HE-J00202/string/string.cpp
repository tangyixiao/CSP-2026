#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);	
    freopen("string.out","w",stdout);
	long long a,e=0,h=0;
	string d="";
	cin>>a;
	for (long long i=1;i<=a;i++)
	{
		long long b;
		char c;
		cin>>b>>c;
		for (long long j=1;j<=b;j++)
		{
			d+=c;
		}
		e+=b;
	}
	if (e%2==1)
	{
		long long f=e/2-1,g=2;
		while (f>=0)
		{
			if (d[f]!=d[f+g])
			{
				h++;
			}
			g+=2;
			f--;
		}
	}
	else
	{
		int f=e/2,g=1;
		while (f>0)
		{
			if (d[f]!=d[f+g])
			{
				h++;
			}
			g+=2;
			f--;
		}
	}
	cout<<h;
 } 
