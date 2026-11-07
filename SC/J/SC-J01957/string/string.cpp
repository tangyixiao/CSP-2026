#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string4.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,h = 0,g = 0,a[200000];
	cin >> n;
	char b[n];
	for(int i = 0;i < n;i++)
	{
		cin >> a[i] >> b[i];
		h+=a[i];
	}
	long long h1 = h/2,i = 0;
	n--;
	while(h1 > 0)
	{
		if(b[n] != b[i])
		{
			b[n] = b[i];
			g++;
			if(a[n] != a[i])
			{
				if(a[n] > a[i])
				{
					a[i+1] += a[n] - a[i];
				}
				else
				{
					a[i+1] += a[i] - a[n];
				}
			}
		}
		h1 -= a[n];
		n--;		
	}
	cout << g;
	return 0;
}