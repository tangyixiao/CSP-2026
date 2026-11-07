#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
struct node
{
	int a;
	char c;
}s[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	long long cnt = 0;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> s[i].a >> s[i].c;
	}
	int l = 1,r = n;
	while (l < r)
	{
		int m = min(s[l].a,s[r].a);
		if (s[l].c != s[r].c) cnt += m;
		s[l].a -= m;
		s[r].a -= m;
		if (s[l].a <= 0) l++;
		if (s[r].a <= 0) r--;
	}
	cout << cnt;
	return 0;
}