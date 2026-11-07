#include <bits/stdc++.h>
using namespace std;

int n;
long long ans;
struct node
{
	char c;
	int a;
}s[200005];
int l = 1,r;

void get(int a,int b)
{
	if (s[l].c == s[r].c)
	{
		if (s[l].a >= s[r].a)
		{
			s[l].a -= s[r].a;
			r--;
		}
		else
		{
			s[r].a -= s[l].a;
			l++;
		}
	}
	else
	{
		if (s[l].a >= s[r].a)
		{
			ans += s[r].a;
			s[l].a -= s[r].a;
			r--;
		}
		else
		{
			ans += s[l].a;
			s[r].a -= s[l].a;
			l++;
		}
	}
	return;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	r = n;
	for (int i = 1;i <= n;i++)
	{
		cin >> s[i].a >> s[i].c;
	}
	while (l < r)
	{
		get(l,r);
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
