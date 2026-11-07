#include <iostream>

using namespace std;
using ll = long long;

const int N = 2e5 + 10;

ll n, l, mid;
ll a[N];
ll ans;
int lidx, ridx;
int lli, lri;
char c[N];

ll dist(int idx)
{
	if (a[idx] <= mid)
		return a[idx];
	return l - a[idx - 1];
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int tmp;
		cin >> tmp >> c[i];
		a[i] = a[i - 1] + tmp;
		l += tmp;
	}
	mid = (l + 1) / 2;
//	cout << "L: " << l << "  MID:" << mid << "\n";
	
	int idx, type = 0;
	for (idx = 1; idx <= n; ++idx)
	{
		if (a[idx] > mid)
		{
			type = 1;
			break;
		}
		else if (a[idx] == mid)
		{
			type = 2;
			break;
		}
	}
	
//	cout << "TYPE: " << type << "\n";
	c[0] = c[1];
	if (type == 1)
	{
		for (int i = n; i >= idx; --i)
		{
			a[i + 1] = a[i];
			c[i + 1] = c[i];
		}
		a[idx] = mid;
		c[idx] = c[idx + 1];
		n += 1; 
	}

//	for (int i = 1; i <= n; ++i)
//	{
//		cout << i << ":  ";
//		cout << a[i] << ' ';
//		cout << c[i] << "\n";
//	}
	
	lidx = 1, ridx = n;
//	cout << dist(1001) << "\n";
	while (lidx < ridx)
	{
		int factor = (c[lidx] != c[ridx]);
		int tmp = 0;
//		cout << lidx << ' ' << ridx << ' ';
		if (dist(lidx) < dist(ridx))
		{
			tmp = dist(lidx) - max(dist(lidx - 1), dist(ridx + 1));
			lidx++;
		}
		else if (dist(lidx) == dist(ridx))
		{
			tmp = dist(lidx) - max(dist(lidx - 1), dist(ridx + 1));
			lidx++, ridx--; 
		}
		else
		{
			tmp = dist(ridx) - max(dist(lidx - 1), dist(ridx + 1));
			ridx--;
		}
//		cout << factor * tmp << "\n";
		ans += factor * tmp;
	}
	cout << ans;
	return 0;
}


