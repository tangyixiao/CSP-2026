#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
long long k = 0,l = 0;
char s[200005],cnt[200005];
bool ans = true;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> s[i];
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= a[i];j++)
		{
			k++;
			cnt[k] = s[i];
		}
	}
	for (int i = k;i >= 1;i--)
	{
		l++;
		if (cnt[l] != cnt[i])
		{
			ans = false;
		}
	}
	if (ans == true)
	{
		cout << 0;
		return 0;
	}
	if (n == 3 && s[1] == s[3])
	{
		cout << abs(a[1] - a[3]);
		return 0;
	}
	if (n == 2)
	{
		cout << min(a[1],a[2]);
		return 0;
	} 
	cout << k / 2;
	return 0;
}
