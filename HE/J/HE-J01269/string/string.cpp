#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,d=0,e=0,h=0;
	string c,s;
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		cin>>b>>c;
		d+=b;
		for (int i=1;i<=b;i++)
		{
			s=s+c;
		}
	}
	if (d/2==0)
	{
		e=d/2;
	}
	else
	{
		e=d/2+1;
	}
	for (int i=1;i<=d;i++)
	{
		for (int j=d;j>=1;j--)
		{
			if (i+j==d)
			{
				if(s[i]!=s[j])
				{
					h++;
				}
			}
		}
	}
	cout<<h;
	return 0;
}
