#include <bits/stdc++.h>
using namespace std;
int a[500005], n, m, card_left[500005], desk[500005], tot;
void push(int x)
{
	tot++;
	desk[tot] = x;
}
void check(int k)
{
	for (int i = 1; i <= tot; i++)
	{
		if (desk[i] == k)
		{
			tot = i - 1;
		}
	}
}
int main()
{
	freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		tot = 0;
		for (int j = i; j <= n; j++)
		{
			check(a[j]);
			push(a[j]);
		}
		for (int j = 1; j <= tot; j++)
		{
			card_left[desk[j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
	{
		cout << card_left[i] << " ";
	}
	return 0;
}
