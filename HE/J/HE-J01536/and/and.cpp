#include<bits/stdc++.h>
using namespace std;
bitset<35> z[200005];
int n,m,x[200005],v[200005],t;
bool f = false;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> x[i];
		z[i] = x[i];
		v[i] = 1;
	}
	for(int j = 30;j >= 0;j--)
	{
		t = 0;
		for(int i = 1;i <= n;i++)
		{
			if(z[i][j] == 1 && v[i] == 1)
			{
				t++;
			}
		}
		if(t >= m)
		{
			f = true;
			for(int i = 1;i <= n;i++)
			{
				if(z[i][j] == 0)
				{
					v[i] = 0;
				}
			}
		}
	}
	if(f)
	{
		t = -1;
		for(int i = 1;i <= n && m > 0;i++)
		{
			if(v[i] == 1)
			{
				if(t == -1)
				{
					t = x[i];
				}
				else
				{
					t = (t&x[i]);
				}
				m--;
			}
		}
		cout << t;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
