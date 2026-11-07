#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[100005];
	string b[100005],p,q;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i]>>b[i];
		for (int j=1;j<=a[i];j++)
		{
			p+=b[i];
		}
	}
	bool fg=1;
	for (int i=1;i<p.size();i++)
	{
		if (p[i]==p[i+1])
		{
			fg=0;
		}
	}
	if (fg)
	{
		cout <<p.size()-1;
		return 0;
	}
	for (int i=p.size();i>=1;i--)
	{
		q+=p[i];
	}
	if (q==p)
	{
		cout <<"0";
	}
	return 0;
}