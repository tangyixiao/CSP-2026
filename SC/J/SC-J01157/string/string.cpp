#include <iostream>
#define ll long long

using namespace std;

const int N = 2e5 + 5;

struct node
{
	char c;
	int n;
} a[N];

int main(void)
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i].n >> a[i].c;
	}
	int l = 1, r = n;
	ll ans = 0;
	while(r > l)
	{
		if(a[l].c != a[r].c)
		{
			if(a[l].n == a[r].n)
			{
				ans += a[l].n;
				a[l].n = a[r].n = 0;
				l++;
				r--;
			}
			else if(a[l].n < a[r].n)
			{
				a[r].n -= a[l].n;
				ans += a[l].n;
				a[l].n = 0;
				l++;
			}
			else
			{
				a[l].n -= a[r].n;
				ans += a[r].n;
				a[r].n = 0;
				r--;
			}
		}
		else
		{
			if(a[l].n == a[r].n)
			{
				a[l].n = a[r].n = 0;
				l++;
				r--;
			}
			else if(a[l].n < a[r].n)
			{
				a[r].n -= a[l].n;
				a[l].n = 0;
				l++;
			}
			else
			{
				a[l].n -= a[r].n;
				a[r].n = 0;
				r--;
			}
		}
	}
	cout << ans;
} 