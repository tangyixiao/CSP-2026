#include <bits/stdc++.h>
using namespace std;

int n, m;
long long a[500005];
long long desk[500005];
bool ntod[5000005];
long long pos = 1;

int check(int in)
{
	long long cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		memset(ntod, 0, sizeof(ntod));
		for (int l = i; l <= n; l++)
		{
			int k = a[l];
			if (ntod[k])
			{
				desk[pos + 1] = k;
				pos++;
				ntod[k] = false;
			}
			else
			{
				for (int j = 1; j <= pos; j++)
				{
					if (desk[j] == k)
					{
						pos = j;
						break;
					}
				}
				for (int j = pos; j <= n; j++)
				{
					ntod[desk[j]] = 0;
					desk[j] = 0;
				}
			}
			for (int j = 1; j <= m; j++)
			{
				cout << desk[j] << '.' << k << "..";
			}
			cout << l < "..";
		}
		cout << endl;
	}
	if (desk[1] = in)
	{
		cnt++;
	}
	return cnt;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cout << check(i) << ' ';
	}
	return 0;
}
