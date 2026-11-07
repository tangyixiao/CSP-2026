#include <iostream>
using namespace std;
const int N = 200005;
long long a[N], n, tot, ans;
char c[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i] >> c[i];
	for(int l = 1, r = n ; l < r ; ) 
	{
		long long k = a[l] - a[r];
		if(c[l] == c[r])
		{
			if(k > 0)
			{
				a[l] -= a[r];
				r--;
			}
			else if(k == 0)
			{
				l++;
				r--;
			}
			else
			{
				a[r] -= a[l];
				l++;
			}
		}
		else
		{
			if(k > 0)
			{
				a[l] -= a[r];
				ans += a[r];
				r--;
			}
			else if(k == 0)
			{
				ans += a[l];
				l++;
				r--;
			}
			else
			{
				a[r] -= a[l];
				ans += a[l];
				l++;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
