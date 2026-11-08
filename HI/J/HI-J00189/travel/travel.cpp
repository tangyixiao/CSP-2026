#include<bits/stdc++.h>
using namespace std;
int a, b, f = 1;
char x[5], y[5];
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> a >> x >> b >> y;
    if (a == b) cout << 1;
    else
	{
		cout << 0;
		f = 0;
	}
    if (x[0] == y[0] && x[1] == y[1] && f) cout << 1;
    else
	{
		cout << 0;
		f = 0;
	}
    int u, v;
    if (x[2] <= 'C') u = 1;
    else u = 0;
    if (y[2] <= 'C') v = 1;
    else v = 0;
    if (u == v && f) cout << 1;
    else
	{
		cout << 0;
		f = 0;
	}
    if ((x[2] + 1 == y[2] || x[2] - 1 == y[2]) && u == v && f) cout << 1;
    else cout << 0;
	return 0;
}
