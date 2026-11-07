#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200010];
char c[200010];
long long l, r;
long long cnt = 0;

void newlr()
{
	if (a[l] == 0) {
		l++;
	}
	if (a[r] == 0) {
		r--;
	}
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	l = 1;
	r = n;
	while (l < r)
	{
		if (c[l] == c[r])
		{
			long long minn = min(a[l], a[r]);
			a[l] -= minn;
			a[r] -= minn;
			newlr();
		} 
		else
		{
			if (a[l] <= a[r])
			{
				c[l] = c[r];
				cnt += a[l];
			}
			else
			{
				c[r] = c[l];
				cnt += a[r];
			}
		}
	}

	cout << cnt << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
