#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
struct node
{
	int a;
	char c;
}s[N];
long long ans,n;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> s[i].a >> s[i].c;
	}
	int i = 1,j = n;
	while (i < j)
	{
		if (s[i].a < s[j].a)
		{
			if (s[i].c != s[j].c)
			{
				ans += s[i].a;
			}
			s[j].a -= s[i].a;
			i++;
		}
		else if (s[i].a > s[j].a)
		{
			if (s[i].c != s[j].c)
			{
				ans += s[j].a;
			}
			s[i].a -= s[j].a;
			j--;
		}
		else
		{
			if (s[i].c != s[j].c)
			{
				ans += s[i].a;
			}
			i++,j--;
		}
	}
	cout << ans;
	
	return 0;
}
