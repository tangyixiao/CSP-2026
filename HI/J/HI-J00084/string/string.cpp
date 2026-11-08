#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long a[N];
char b[30];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		cin >> b[i];
	}
	int ans = 0;
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= a[i];j++)
		{
			s += b[i];
		}
	}
	int l = s.size();
	int p = 0, q = l-1;
	for (int i = 0;i <= l;i++)
	{
		cout << s[i] << " "; 
		if (s[p] != s[q])
		{
			ans++; 
		}
		if ((s == p) || ans(p - q) == 0)
		{
			continue;
		}
		q--;
		p++;
	}
	cout << ans;
}
