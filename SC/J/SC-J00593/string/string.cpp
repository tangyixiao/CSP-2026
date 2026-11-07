#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

struct stu
{
	int a;
	char c;
}s[N];

void solve()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i].a >> s[i].c;
	}
	long long ans = 0;
	for(int i = 1; i <= n; i=i)
	{
		for(int j = n; j >= 1; j=j)
		{
			if(s[i].a >= s[j].a)
			{
				if(s[i].c != s[j].c)
				{
					ans += s[j].a;
				}
				s[i].a = s[i].a - s[j].a;
				s[j].a = 0;
			}
			if(s[i].a <= s[j].a)
			{
				if(s[i].c != s[j].c)
				{
					ans += s[i].a;
				}
				s[j].a = s[j].a - s[i].a;
				s[i].a = 0;
			}
			if(s[i].a == 0)
			{
				i++;
			}
			if(s[j].a == 0)
			{
				j--;
			}
		}
	}
	cout << ans;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	solve();
	fclose(stdin);
	fclose(stdout);
	return 0;
}