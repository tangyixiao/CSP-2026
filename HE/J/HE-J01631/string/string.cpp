#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll ans = 0;
int  a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 0;i < n;i++) cin >> a[i] >> c[i];
	for (int i = 0,j = n-1;i < j;)
	{
		if (c[i] != c[j]) ans += min(a[i],a[j]);
		if (a[i] > a[j])
		{
			a[i] -= a[j];
			j--;
			if (a[i] == 0) i++;
		}
		else
		{
			a[j] -= a[i];
			i++;
			if (a[j] == 0) j--;
		}
	}
	cout << ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
