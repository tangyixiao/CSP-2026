#include <bits/stdc++.h>
using namespace std;
long long n,a[100000010];
string c[20010];
long long cct = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	
	for(long long i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		cct += a[i];
	}
	if(n == 1)
	{
		cout << 0;
		return 0;
	}
	else if(n == 2)
	{
		if(c[1] == c[2])
		{
			cout << 0;
			return 0;
		}
		else
		{
			cout << min(a[1],a[2]);
			return 0;
		}
	}
	cout << cct / 2;
	return 0;
}
