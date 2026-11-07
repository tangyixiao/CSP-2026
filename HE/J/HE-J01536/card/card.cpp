#include<bits/stdc++.h>
using namespace std;
int n,m,t,x[500005],y[300005],z[300005],v[500005];
bool f = true;
void s1(int o,int u)
{
	while(o <= n)
	{
		z[o] += u;
		o += (o&(-o));
	}
}
int s2(int o)
{
	t = 0;
	while(o >= 1)
	{
		t += z[o];
		o -= (o&(-o));
	}
	return t;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> x[i];
		if(x[i] < x[i-1])
		{
			f = false;
		}
	}
	if(f)
	{
		t = 0;
		for(int i = 1;i <= n;i++)
		{
			t++;
			if(x[i] != x[i+1])
			{
				cout << t << ' ';
				t = 0;
			}
		}
		return 0;
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			y[j] = -1;
		}
		for(int j = 1;j <= n;j++)
		{
			z[j] = 0;
		}
		for(int j = i;j <= n;j++)
		{
			if(!(y[x[j]] == -1 || s2(y[x[j]]) > 0))
			{
				s1(y[x[j]],1);
				s1(j,-1);
			}
			y[x[j]] = j;
		}
		for(int j = i;j <= n;j++)
		{
			if(s2(j) == 0)
			{
				v[x[j]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << v[i] << ' ';
	}
	return 0;
}
