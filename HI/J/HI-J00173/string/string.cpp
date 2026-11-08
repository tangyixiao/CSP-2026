#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n = 0;
	bool f = 1;
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i]>>b[i];
		if(b[i] != b[i-1] && i != 1)
		{
			f = 0;
		}
	}
	if(f == 1 || n == 1)
	{
		cout<<0;
		return 0;
	}
	long long x = 1,y = n,s = 0;
	while(x != y && x-y != 1)
	{
		bool k = 1;
		if(b[x] != b[y])
		{
			if(a[x] < a[y])
			{
				s += a[y];
				a[x+1] -= a[y]-a[x];
			}
			else if(a[x] > a[y])
			{
				s += a[x];
				a[y-1] -= a[x]-a[y];
			}
			if(a[x] == a[y])
			{
				s += a[x];
			}
		}
		else if(b[x] == b[y] && a[x] != a[y])
		{
			if(a[x] < a[y])
			{
				s += a[x];
				a[x+1] -= a[y]-a[x];
			}
			else
			{
				s += a[y];
				a[y-1] -= a[x]-a[y];
			}
		}
		x++;
		y--;
	}
	cout<<s;
	return 0;
}
