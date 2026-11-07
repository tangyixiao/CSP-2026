#include <bits/stdc++.h>
using namespace std;
string s;
int n;
long long a, num = 0, cnt = 0;
char b;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
 	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		for (int j = 1; j <= a; j++)
		{
			s += b;
			num++;
		}
	}
	if (num % 2 == 0)
	{
		for (int i = 0; i < num / 2; i++)
		{
			int t = int(s[i]), h = int(s[num - 1 - i]);
			if (t != h)
			{
				cnt++;
			}
		}
	}
	else
	{
		for (int i = 0; i < (num - 1) / 2; i++)
		{
			int t = int(s[i]), h = int(s[num - 1 - i]);
			if (t != h)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
