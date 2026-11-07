#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int n,a[50005];
char c[50005],s[50005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int m = 0;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= a[i];j++)
		{
			m++;
			s[m] = c[i];
		}
	}
	int p = m / 2 + 1,t = 1,ans = 0;
	for (int i = m;i >= p;i--)
	{
		if (s[i] != s[t]) ans++;
		t++;
	} 
	cout << ans;
	return 0;
}
