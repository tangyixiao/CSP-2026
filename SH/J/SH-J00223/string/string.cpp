#include <iostream>
using namespace std;
const int N = 2e5+5;
int n;
int a[N];
char c[N];
long long ans;
long long l, r;
int cl, cr;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)	cin >> a[i] >> c[i];
	cr = n+1;
	while (cl < cr-1)
	{
		if (l <= r)
		{
			cl++;
			l += a[cl];
		}
		else
		{
			cr--;
			r += a[cr];
		}
		if (c[cl] != c[cr])
		{
			if (l <= r) ans += min(l-r+a[cr], 1ll*a[cl]);
			else ans += min(r-l+a[cl], 1ll*a[cr]);
		}
	}
	cout << ans;
	return 0;
}
