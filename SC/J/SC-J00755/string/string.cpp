#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005;
int n;
ll L;
struct node
{
	ll a;
	char c;
	ll p;
} x[N], y[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    	cin >> x[i].a >> x[i].c;
    	L += x[i].a;
    	y[i] = x[i];
    }
	reverse(y + 1, y + n + 1);
	ll ln1 = 0, ln2 = 0;
	for (int i = 1; i <= n; i++)
	{
		ln1 += x[i].a, ln2 += y[i].a;
		x[i].p = ln1, y[i].p = ln2;
	}
	ll ans = 0;
	ll lx = 1, ly = 1;
	// i : x ָ��, j : y ָ�� 
	for (int i = 1, j = 1; lx <= L;)
	{
		// ly һ��= lx
		ll yR = y[j].p;
		ll xR = x[i].p;
		if (yR < xR)
		{
			if (y[j].c == x[i].c) {}
			else
				ans += yR - ly + 1;
			ly = yR + 1, j++;
			lx = ly;
		}
		else if (yR > xR) 
		{
			if (y[j].c == x[i].c) {}
			else
				ans += xR - lx + 1;
			lx = xR + 1, i++;
			ly = lx;
		}
		else
		{
			if (y[j].c == x[i].c) {}
			else
				ans += xR - lx + 1;
			lx = xR + 1, i++;
			ly = lx, j++;
		}
	}
	cout << ans / 2 << '\n';
    return 0;
}
