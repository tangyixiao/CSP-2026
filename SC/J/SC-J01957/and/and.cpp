#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	long long n,m,c = 0,k = 2,h = 0;
	cin >> n >> m;
	long long a[n],b[n],b1[n];
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		long long j = 1,a1 = a[i];
		while(a1 > 0)
		{
			if(a1 % 2 == 1)
			{
				b[i] += j;
				b1[i] += j;
			}
			a1/=2;
			j*= 10;
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = i;j < n;j++)
		{
			k = 1;
			h = 0;
			while(b1[i] != 0 && b1[j] != 0)
			{
				if(b1[i] % 10 == 1 && b1[j] % 10 == 1)
				{
					h += k;
				}
				b1[i] /= 10;
				b1[j] /= 10;
				k*=2;
			}
			if(h > c)
			{
				c = h;
			}
			b1[i] = b[i];
			b1[j] = b[j];
		}
	}
	cout << c+4;
	return 0;
}