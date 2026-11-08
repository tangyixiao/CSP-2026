#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,b = 0;
	string d,p[100005];
	cin >> n;
	int o[100005];
	for (int i = 1;i <= n;i++)
	{
		cin >> o[i] >> p[i];
		for (int j = 1;j <= o[i];j++)
		{
			d += p[i];
		}
	}
	for (int i = 0;i <= d.length() / 2;i++)
	{
		if (d[i] == d[d.length() - i])
		{
			cout << 0;
		break;
		}
		else
		{
			if (d[i] != d[d.length() - i])
			{
				b++;
			}
		}
	}
	cout << b;
	return 0;
 }
